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

const ll MAXN = 251;

inline void dfs (ll node, v <ll> tree[], bool state[]) {
    state[node] = true;
    for (ll side : tree[node]) {
        if (!state[side]) {
            dfs (side, tree, state);
        }
    }
}

signed main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif
    
    ll N, M;
    cin >> N >> M;

    v <ll> tree[MAXN];
    bool state[MAXN];

    for (int i = 1; i <= M; ++i) {
        ll node, side;
        cin >> node >> side;

        tree[node].push_back(side);
        tree[side].push_back(node);
    }

    fill (state + 1, state + N + 1, false);

    dfs (1, tree, state);
    bool none = true;

    for (int i = 1; i <= N; ++i) {
        if (!state[i]) {
            cout << i << '\n';
            none = false;
        }
    } 

    if (none) cout << 0;
    return 0;   
}