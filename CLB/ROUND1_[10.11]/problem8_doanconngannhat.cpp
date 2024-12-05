#define __SIZEOF_INT128__ 16
#define _CRT_SECURE_NO_WARNINGS

#include <bits/stdc++.h>


#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")

using namespace std;

#define v vector
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define f(array) (array).begin(), (array).end()
#define b(array) (array).rbegin(), (array).rend()

#ifdef LOCAL
    mt19937 rnd(chrono::system_clock::now().time_since_epoch().count());
#endif

signed main() { 
    cin.tie(nullptr), cout.tie(nullptr) 
    -> ios_base::sync_with_stdio(false);

    #define file "main"
    #ifndef ONLINE_JUDGE
            freopen (file ".inp", "r", stdin);
            freopen (file ".out", "w", stdout);
    #endif

    #ifdef LOCAL
        clock_t start, end;
        start = clock();
    #endif

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> divisors(n);
    for (int i = 0; i < n; i++) {
        int num = a[i];
        int count = 1;
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                int power = 0;
                while (num % j == 0) {
                    power++;
                    num /= j;
                }
                count *= (power + 1);
            }
        }
        if (num > 1) count *= 2;
        divisors[i] = count;
    }

    int maxDivisors = *max_element(f(divisors));
   
    int l = 0, count = 0;
    int minLen = INT_MAX;
    
    for (int r = 0; r < n; r++) {
        if (divisors[r] == maxDivisors) {
            count++;
        }
        
        while (count >= k) {
            minLen = min(minLen, r - l + 1);
            if (divisors[l] == maxDivisors) {
                count--;
            }
            l++;
        }
    }

    cout << (minLen == INT_MAX ? -1 : minLen);
    #ifdef LOCAL
        end = clock();
        cerr << "runtime : " << fixed << setprecision(7) << (double)(end - start) / (double)CLOCKS_PER_SEC << "'s";
    #endif
    
    return 0;   
}
