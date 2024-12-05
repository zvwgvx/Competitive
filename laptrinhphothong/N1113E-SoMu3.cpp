#include <iostream>
#define FOR(m,a,MOD) for (; m; m >>= 1, a = a * a % MOD)
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
ll a, n;
ll POW(ll a, ll m) {
	ll res = 1;
	FOR(m,a,MOD) {
		if (m & 1) res = res * a % MOD;
	}
	return res;
}
void COUT() {
	ll ans = (POW(a, n + 1) - 1) % MOD;
	cout << ans * (POW(a - 1, MOD - 2)) % MOD;
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
	cin>>a>>n;
	COUT();
	return 0;
}