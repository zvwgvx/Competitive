#include <iostream>
#include <vector>
#include <math.h>
#include <bitset>
#include <cctype>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

using namespace std;

#define v vector
#define umap unordered_map
#define uset unordered_set
#define ll long long
#define up upper_bound
#define low lower_bound
#define bin binary_search
#define f(array) (array).begin(), (array).end()
#define b(array) (array).rbegin(), (array).rend()

inline bool compare(const ll mid, const ll limit, v <ll> lst, ll S) {
    ll result = 0;
    for (int i = 0; i < limit; ++i) {
        result += mid / lst[i];
    }

    return result >= S;
}

signed main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif
    
    ll S, N, left = 1e18, right = 1e15;

    cin >> S >> N;

    v <ll> lst(N);
    for (int i = 0; i < N; ++i) {
        cin >> lst[i];
        left = min(left, lst[i]);
    }

    ll result = 0;
    while (left <= right) {
        ll mid = (left + right) >> 1;
        if (compare(mid, N, lst, S)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << result;

    return 0;   
}