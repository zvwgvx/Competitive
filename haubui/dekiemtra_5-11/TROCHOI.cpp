#define __SIZEOF_INT128__ 16
#define _CRT_SECURE_NO_WARNINGS

#include <bits/stdc++.h>

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

    ll n, m;
    cin >> n >> m;

    ll max_e = 0, result = 0;
    v <ll> lst(n + 1);
    for (int i = 1; i <= n; i++) {
        ll a, b;
        cin >> a >> b;
        lst[i] = a + b;
        max_e = max(max_e, b);
    }

    sort (b(lst));

    ll i = -1;
    while (i <= n) {
        i++;
        if (lst[i] >= max_e) {
            m--; 
            result += lst[i];  
        }
        if (m == 0 || lst[i] < max_e) break;
    }

    cout << result + m * max_e;

    #ifdef LOCAL
        end = clock();
        cerr << "runtime : " << fixed << setprecision(7) << (double)(end - start) / (double)CLOCKS_PER_SEC << "'s";
    #endif
    
    return 0;   
}