#define __SIZEOF_INT128__ 16
#define _CRT_SECURE_NO_WARNINGS

#include <bits/stdc++.h>

#pragma GCC optimize("fast-math")

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC optimize("no-stack-protector") 
#pragma comment(linker, "/stack:200000000")
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

    int k;
    cin >> k;
    
    double total = 0;
    
    if (k <= 100) {
        total = k * 650;
    } else if (k <= 150) {
        total = 100 * 650 + (k - 100) * 1250;
    } else if (k <= 200) {
        total = 100 * 650 + 50 * 1250 + (k - 150) * 1580;
    } else {
        total = 100 * 650 + 50 * 1250 + 50 * 1580 + (k - 200) * 1790;
    }
    
    total *= 1.1; 
    
    cout << fixed << setprecision(2) << total << '\n';
    
    #ifdef LOCAL
        end = clock();
        cerr << "runtime : " << fixed << setprecision(7) << (double)(end - start) / (double)CLOCKS_PER_SEC << "'s";
    #endif
    
    return 0;   
}
