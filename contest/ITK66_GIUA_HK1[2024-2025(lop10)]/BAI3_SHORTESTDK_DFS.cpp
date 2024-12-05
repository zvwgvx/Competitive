#include <iostream>
#include <vector>
#include <math.h>
#include <bitset>
#include <cctype>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

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

const ll INF = 1e18;
int n, m, k;
vector<pair<int, ll>> adj[100005];
ll dist[100005][19];

inline void dfs(int u, int skips, ll cost) {
    if (cost >= dist[u][skips]) return;
    dist[u][skips] = cost;
    for (auto &[v, w] : adj[u]) {
        if (dist[v][skips] > cost + w) dfs(v, skips, cost + w);
        if (skips < k && dist[v][skips + 1] > cost) dfs(v, skips + 1, cost);
    }
}

int main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif

    cin >> n >> m >> k;
    for (int i = 0; i < m; ++i) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

    for (int i = 1; i <= n; ++i)
        fill(dist[i], dist[i] + k + 1, INF);

    dfs(1, 0, 0);

    for (int i = 1; i <= n; ++i) {
        ll answer = *min_element(dist[i], dist[i] + k + 1);
        cout << (answer == INF ? -1 : answer) << " ";
    }

    return 0;
}
