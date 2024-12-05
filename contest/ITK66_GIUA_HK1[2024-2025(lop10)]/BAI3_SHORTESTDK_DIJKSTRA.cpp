#include <iostream>
#include <vector>
#include <math.h>
#include <bitset>
#include <cctype>
#include <string>
#include <algorithm>
#include <queue>
#include <tuple>
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
const int MAXN = 100005;

int n, m, k;
vector<pair<int, ll>> adj[MAXN];
ll dist[MAXN][19]; 

void dijkstra() {
    for (int i = 1; i <= n; ++i)
        for (int j = 0; j <= k; ++j)
            dist[i][j] = INF;
    
    priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int>>, greater<>> pq;
    dist[1][0] = 0;
    pq.push({0, 1, 0}); 

    while (!pq.empty()) {
        auto [cur_cost, u, skips] = pq.top();
        pq.pop();

        if (cur_cost > dist[u][skips]) continue;

        for (auto &[v, w] : adj[u]) {
            if (dist[v][skips] > cur_cost + w) {
                dist[v][skips] = cur_cost + w;
                pq.push({dist[v][skips], v, skips});
            }
            if (skips < k && dist[v][skips + 1] > cur_cost) {
                dist[v][skips + 1] = cur_cost;
                pq.push({dist[v][skips + 1], v, skips + 1});
            }
        }
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

    dijkstra();

    for (int i = 1; i <= n; ++i) {
        ll answer = INF;
        for (int j = 0; j <= k; ++j) {
            answer = min(answer, dist[i][j]);
        }
        cout << (answer == INF ? -1 : answer) << " ";
    }

    return 0;
}
