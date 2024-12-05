#include <iostream>
using namespace std;
#define ll long long
long long gt(ll n) {
    ll s = 1;
    for (ll i = 1; i <= n; i++) {
        s *= i;
    }
    return s;
}
long long C(ll k, ll n) {
    return gt(n) / (gt(k) * gt(n - k));
}
int main() {
    ll q;
    cin >> q;
    ll n[q + 1], k[q + 1];
    for (ll i = 1; i <= q; ++i) cin >> n[i] >> k[i];
    for (ll i = 1; i <= q; ++i) cout << C(k[i], n[i]) << endl;
}