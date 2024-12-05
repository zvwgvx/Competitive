#include <iostream>
#include <vector>
#include <math.h>
#include <bitset>
#include <cctype>
#include <string>
#include <algorithm>
#include <unordered_map>

#pragma GCC optimize("O3")

using namespace std;

#define fi first
#define se second
#define make(N) ii (N); cin >> (N);
#define vdp(N) vii dp((N), 0);
#define vlst(N) vii lst((N), 0);
#define vpre(N) vii prefix((N), 0);
#define vsuf(N) vii suffix((N), 0);
#define fsize(array) (array).begin(), (array).end()
#define bsize(array) (array).rbegin(), (array).rend()

typedef int ii;
typedef long long ll;
typedef unsigned long long ull;
typedef vector <ii> vii;
typedef vector <ll> vll;
typedef unordered_map <ll, ll> table4l;
typedef unordered_map <string, ll> tablesl;

const ll MAXN = 1e6;
const ll MINN = -1e18;

signed main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
        freopen("main.inp", "r", stdin);
        freopen("main.out", "w", stdout);
    #endif
    
    ll query;
    cin >> query;

    while (query--) {
        ll N;
        cin >> N;

        vector<pair<ll, ll>> lst(N + 1);
        vector<ll> B(N + 1, 0); 

        for (int i = 1; i <= N; ++i) {
            cin >> lst[i].fi;
        } 

        for (int i = 1; i <= N; ++i) {
            cin >> lst[i].se;
        }

        ll count = 1;

        sort(lst.begin() + 1, lst.end());

        for (int i = 1; i <= N; ++i) {
            bool state = false;
            
            for (int j = 1; j < count; ++j) {
                if (lst[i].fi > B[j]) { 
                    state = true;
                    B[j] = lst[i].se; 
                    break;
                }
            }

            if (!state) {
                B[count] = lst[i].se;
                count++;
            }
        }

        cout << count - 1 << '\n';
    }

    return 0;
}
