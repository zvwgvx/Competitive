//http://ntucoder.net/Problem/Details/2201
#include <iostream>
#include <algorithm>
#define ll long long
#define RUN(i, a, b) for (ll i = a; i <= b; ++i) 
using namespace std;
const ll oo = 1e9 + 7;
ll tests;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> tests;
    RUN(i, 1, tests) {
        ll n, k, res = 0; 
        cin >> n >> k;
        ll a[n + 2];
        RUN(i, 1, n) {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1, greater<ll>());
        a[n + 1] = -oo; 
        RUN(i, 1, n) {
            if(a[i] - a[i + 1] > k) ++res;
        }
        cout << "Case #" << i <<": " << res << '\n';
    }
	return 0;
}
    