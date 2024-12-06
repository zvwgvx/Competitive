#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

using namespace std;

#define INP "input"
#define OUT "output"

/* some template */
template <typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& a) {
    out << (int)a.size() << '\n';
    for (const auto& v : a) out << v << ' ';
    out << endl;
    return out;
}

template <typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<vector<T>>& a) {
    out << (int)a.size() << '\n';
    for (const auto& v : a) {
        for (const auto& value : v) out << value << ' ';
        out << endl;
    }
    return out;
}

template <typename T>
std::istream& operator>>(std::istream& is, std::vector<T>& v) {
    for (auto& x : v) is >> x;
    return is;
}
/* end template */

const long long INF_LL = 1e18;
const int INF = 1e9 + 100;
const long double EPS = 1e-9;
const int BLOCK = 550;
const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, 1, 0, -1};

void open_file() {
#ifdef THEMIS
    freopen(INP ".txt", "r", stdin);
    freopen(OUT ".txt", "w", stdout);
#endif  // THEMIS
}

const int maxN = 1e6 + 100;
const int MOD = 1e9 + 7;

/// Graham
struct Point {
    long long x, y;
    Point(){};
    Point(long long _x, long long _y) : x(_x), y(_y){};
    friend ostream& operator<<(ostream& os, const Point& A) {
        os << A.x << " " << A.y << '\n';
        return os;
    }
};

int S(Point A, Point B, Point C) {
    vector<Point> a = {A, B, C};
    a.push_back(A);
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        ans += (a[i + 1].x - a[i].x) * (a[i + 1].y + a[i].y);
    }
    return ans;
}

// dijkstra for minimize path
template <typename TEdge, typename TVertex>
void dijkstra(const vector<vector<pair<int, TEdge>>>& adj, int source, vector<TVertex>& d) {
    int n = (int)adj.size();

    d.resize(n);
    for (int i = 0; i < n; i++) d[i] = std::numeric_limits<TVertex>::max();  // initialize for each vertex
    d[source] = 0;                                                           /// initialize for vertex source

    typedef pair<TVertex, int> i2;
    priority_queue<i2, vector<i2>, std::greater<i2>> Q;
    Q.push({d[source], source});

    while ((int)Q.size() != 0) {
        i2 valueTop = Q.top();
        Q.pop();

        TVertex du = valueTop.first;
        int u = valueTop.second;
        if (abs(d[u] - du) > EPS) {  // or abs(d[u] - du) > EPS for double
            continue;
        }

        for (auto it : adj[u]) {
            int v = it.first;
            TEdge w = it.second;

            if (d[v] > d[u] + w) {  // if d[u] + w is better than d[v]
                d[v] = d[u] + w;
                Q.push({d[v], v});
            }
        }
    }
}

void sol() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    cin >> s;

    auto id = [&](int x, int y, int delta = 0) {
        return x * (m + delta) + y;
    };

    auto check = [&](int xL, int yL, int xR, int yR) {
        Point A(xL, yL), B(xR + 1, yR + 1);
        int x = xL, y = yL;
        while (x != xR || y != yR) {
            if (s[x][y] == '#') {
                return false;
            }
            int area = S(A, Point(x + 1, y + 1), B);
            if (area < 0)
                y++;
            else {
                if (area == 0) {
                    x++;
                    y++;
                } else
                    x++;
            }
        }
        return s[xR][yR] != '#';
    };

    vector<vector<pair<int, double>>> adj(n * (m + 1) + 2 * m);
    auto addEdge = [&](int u, int v, double d) {
        adj[u].push_back({v, d});
        adj[v].push_back({u, d});
    };
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int vertexL = id(i, j, 1);
            addEdge(vertexL, vertexL + 1, 1);
            addEdge(vertexL, vertexL + m + 1, 1);
            addEdge(vertexL + 1, vertexL + m + 2, 1);
            addEdge(vertexL + m + 1, vertexL + m + 2, 1);
            for (int u = i; u < n; u++) {
                for (int v = j; v < m; v++) {
                    if (check(i, j, u, v)) {
                        int vertexR = id(u, v, 1) + 2 + m;
                        double dist = sqrt((u - i + 1) * (u - i + 1) + (v - j + 1) * (v - j + 1));
                        addEdge(vertexL, vertexR, dist);
                    }
                }
            }
        }
    }

    vector<double> d;
    dijkstra(adj, id(0, 0), d);
    cout << fixed << setprecision(10) << d[id(n - 1, m - 1, 1) + 2 + m];
}

void solve() {
    clock_t start, end;
    start = clock();
    int T = 1;
    // cin >> T;
    int TestCase = 0;
    while (T--) {
        TestCase += 1;
        cerr << "Processing test = " << TestCase << '\n';
        // cout << "Case #" << TestCase << ": ";
        sol();
        // if (T) cout << '\n';
    }
    end = clock();
    cerr << "Time = " << (double)(end - start) / (double)CLOCKS_PER_SEC << '\n';
}

int main(int argc, char* argv[]) {
    // srand(time(nullptr));
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    open_file();
    solve();
    return 0;
}
