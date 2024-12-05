#include <iostream>
#define ble b % 2 == 0
#define ll long long 
using namespace std;
const int mod = 1e9 + 7;
inline ll Mu(ll a, ll b) {
    if (b == 0) return 1;
    ll kq = Mu(a, b / 2);
    kq = (kq * kq) % mod;
    if (ble) kq = (kq * a) % mod;
    return kq;
}
int main() {
    ll m = 2, n;
    cin >> n;
    cout << (ll)Mu(m, n) % mod;
}
