#pragma GCC diagnostic ignored "-Wunused-parameter"
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

using namespace std;

#define INP "solve"
#define OUT "solve"

const long long INF_LL = 1e17;
const int INF = 1e9 + 100;
const int MOD = 1e9 + 7;
const int Base = 311;
const double EPS = 1e-9;
const int BLOCK = 1000;
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
mt19937 rnd(chrono::system_clock::now().time_since_epoch().count());

void open_file() {
    #ifdef THEMIS
        freopen(INP ".inp","r",stdin);
        freopen(OUT ".out","w",stdout);
    #endif // THEMIS
}

const int maxN = 2e5 + 1000;
void sol(){
    int n;
    cin >> n;
    map<string, int> M;
    set<string> Set;
    for(int i = 0; i < n; i++){
        string s;
        int k;
        cin >> s >> k;
        Set.insert(s);
        M[s] += k;
    }

    vector<string> name(Set.begin(), Set.end());
    sort(name.begin(), name.end(), [&](string A, string B){
         if (M[A] != M[B]) return  M[A] > M[B];
         return A < B;
        });
    cout << name.size() << '\n';
    for(string s : name) cout << s << ' ' << M[s] << '\n';
}

void solve() {
    int T;
    cin >> T;
//    T = 1;
    int TestCase = 0;
    while (T--) {
        TestCase += 1;
        //cout << "Case #" << TestCase << ":" << ' ';
        ///cout << "Case #" << TestCase << '\n';
        sol();
    }
}
int main(int argc,char *argv[]) {
    ///srand(time(nullptr));
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    open_file();
    solve();
}
