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

signed main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif
    
    ll N, result = -1e18;

    cin >> N;

    v <ll> lst(N), binary(N + 1, 1e18);
    binary[0] = -1e18;

    for (ll &e: lst) {
        cin >> e;
    }

    for (ll e: lst) {
        ll pos = low(f(binary), e) - binary.begin();
        binary[pos] = e;
        result = max(result, pos);
    }

    cout << result;
    return 0;   
}