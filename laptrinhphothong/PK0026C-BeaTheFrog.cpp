#include <iostream>
#include <algorithm>
#define RUN for (ll i = 1; i <= n; i++)
#define RUNM for (ll j = 1; j <= m; j++)
#define RUNK for (ll i = 1; i <= so_lan_dap; i++)
using namespace std;
#define ll long long
const ll nmax = 2009;
const ll nmax2 = 1e6 + 9;
ll n, m, so_lan_dap, a[nmax][nmax], s[nmax2], vt_the_frog = 0, MAX = -1e18;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m >> so_lan_dap;
    RUN {
        RUNM {
            cin >> a[i][j];
            ++s[a[i][j]];
            MAX = max(MAX, a[i][j]);
        }
    }
    sort(s + 1, s + 1 + MAX, greater<ll>());
    RUNK {
        vt_the_frog += s[i];
    }
    cout << vt_the_frog;
}
