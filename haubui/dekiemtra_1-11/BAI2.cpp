#include <bits/stdc++.h>

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC diagnostic ignored "-Wunused-parameter"

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

inline bool check(ll N) {
    ll carry = N, temp = 0;

    while (N > 0) {
        temp += N % 10;
        N /= 10;
    }

    return carry % temp == 0;
}

signed main() { 
    cin.tie(nullptr), cout.tie(nullptr) 
    -> ios_base::sync_with_stdio(false);

    #define file "BAI2"
    #ifndef ONLINE_JUDGE
            freopen (file ".inp", "r", stdin);
            freopen (file ".out", "w", stdout);
    #endif

    #ifdef LOCAL
        clock_t start, end;
        start = clock();
    #endif
    
    ll N, queries;
    
    cin >> N >> queries;
    v <ll> lst(N + 1), prefix(N + 1, 0);

    for (int i = 1; i <= N; ++i) {
        cin >> lst[i];
        if (check(lst[i])) {
            prefix[i] = prefix[i - 1] + 1;
        } else prefix[i] = prefix[i - 1];
    }

    while (queries--) {
        ll left, right;
        cin >> left >> right;
        cout << prefix[right] - prefix[left - 1] << '\n';
    }

    #ifdef LOCAL
        end = clock();
        cerr << "runtime : " << fixed << setprecision(7) << (double)(end - start) / (double)CLOCKS_PER_SEC << "'s";
    #endif
    
    return 0;   
}