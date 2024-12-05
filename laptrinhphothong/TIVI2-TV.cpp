#include <bits/stdc++.h>
#define RUN(i, a, b) for(ll i = 1; i <= n; ++i)
#define ll long long 
#define fi first
#define se second
using namespace std;
const ll N = 1e6 + 17;
typedef pair<ll, ll> ii;
ll n, dem, res, b[N];
ii a[N];
int main() {
    cin >> n;
    RUN(i, 1, n) {
        cin >> a[i].fi >> a[i].se;
        b[i] = a[i].fi;
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    RUN(i, 1, n) {
        ll dem = (upper_bound(b + i, b + n + 1, a[i].se - 1) - b) - (lower_bound(b + i, b + n + 1, a[i].fi) - b) - 1;
        if (dem > 0) res += dem;
    }
    
    cout << res;
    return 0;
}
    