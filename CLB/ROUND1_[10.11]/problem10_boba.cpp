#define __SIZEOF_INT128__ 16
#define _CRT_SECURE_NO_WARNINGS

#include <bits/stdc++.h>

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC diagnostic ignored "-Wunused-parameter"

using namespace std;

#define v vector
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define f(array) (array).begin(), (array).end()
#define b(array) (array).rbegin(), (array).rend()
#define int long long

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

    int n, p, q, r;
    cin >> n >> p >> q >> r;

    v<int> a(n + 1), prefix(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];
    }

    for (int x = 1; x < n - 2; ++x) {
        for (int y = x + 1; y < n - 1; ++y) {
            if (prefix[y - 1] - prefix[x - 1] == p) {
                for (int z = y + 1; z < n; ++z) {
                    if (prefix[z - 1] - prefix[y - 1] == q) {
                        for (int w = z + 1; w <= n; ++w) {
                            if (prefix[w] - prefix[z - 1] == r) {
                                cout << x << " " << y << " " << z << " " << w << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    #ifdef LOCAL
        end = clock();
        cerr << "runtime : " << fixed << setprecision(7) << (double)(end - start) / (double)CLOCKS_PER_SEC << "'s";
    #endif
    
    return 0;
}
