#include <iostream>
#include <math.h>
#define RUN(i, a, b) for (ll i = 1; i <= n; ++i) 
#define ll long long
using namespace std;
int main() {
    ll n;
    cin >> n;
    if (n < 3) cout << -1;
    RUN(i, 3, n) {
        ll t = (i + 1) * i / 2, m = sqrt(t);
        if (m * m + m == t) cout << i << " ";
    }
}