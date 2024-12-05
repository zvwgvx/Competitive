#include <iostream>
using namespace std;
#define ll long long
ll t;
string a;
bool BinBon(string s) {
    ll tcs = 0, csln = -1e18, tmp;
    for (ll i = 0; i < s.length(); ++i)
    {
        tcs = tcs + s[i] - 48;
        tmp = a[i] - 48;
        csln = max(csln, tmp);
    }
    ll n = tcs * 10 + csln;
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    cin >> t;
    while (t > 0) {
        cin >> a;
        if (BinBon(a)) cout << "YES" << endl;
        else {
            cout << "NO" << endl;
        }
        t--;
    }
}