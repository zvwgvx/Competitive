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

    int a, b;
    cin >> a >> b;

   
    int s1 = max(a, 2 * b);
    int s2 = max(2 * a, b);
    int s3 = max(a + b, max(a, b));


    int min_side = min({s1, s2, s3});

    cout << min_side * min_side << endl;
    
    #ifdef LOCAL
        end = clock();
        cerr << "runtime : " << fixed << setprecision(7) << (double)(end - start) / (double)CLOCKS_PER_SEC << "'s";
    #endif
    
    return 0;   
}
