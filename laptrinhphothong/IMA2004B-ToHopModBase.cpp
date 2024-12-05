//http://laptrinhphothong.vn/Problem/Details/5657
#include <iostream>
#define RUN(i, a, b) for (ll i = a; i <= b; ++i )
#define ll long long
using namespace std;

int main() {
    ll a, b, mod;
    cin >> a >> b >> mod;
    ll d[a + 1][b + 1];
    RUN(j, 1, b) {
        RUN(i, 1, a) {
            if (i == 1) d[i][j] = j % mod;
            else if (j == 1) d[i][j] = 0;
            else d[i][j] = (d[i - 1][j - 1] + d[i][j - 1]) % mod;
        }
    }
    cout << d[a][b];
}