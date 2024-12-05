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

inline bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
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

    ll a, b;

    cin >> a >> b;
    
    ll max_gcd = __gcd(a, b);
    ll limit = sqrt(max_gcd);
    if (max_gcd == 1) {
        cout << -1;
        return 0;
    }
    if (is_prime(max_gcd)) {
        cout << 1;
        return 0;
    }
    for (int i = 2; i <= limit; i++) {
        if (max_gcd % i == 0) {
            cout << max_gcd / i;
            return 0;
        }
    }
    cout << 1;

    #ifdef LOCAL
        end = clock();
        cerr << "runtime : " << fixed << setprecision(7) << (double)(end - start) / (double)CLOCKS_PER_SEC << "'s";
    #endif
    
    return 0;   
}