#include <iostream>
#define RUN(i, a, b) for(int i = a; i <= b; ++i)
#define ll long long
using namespace std;
ll n, a[305][305], s[305][305], tmp;
int main() {
    cin >> n;
    RUN(i, 1, n) {
        RUN(j, 1, n) cin >> a[i][j];
    }
    RUN(i, 1, n) {
        RUN(j, 1, n) s[i][j] = s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1] + a[i][j];
    }
    if (n == 1) {
        cout << a[1][1];
        return 0;
    }
    if (n == 2) {
        cout << s[2][2];
        return 0;
    }
    ll k;
    if (n % 2 != 0) k = n / 2;
    else k = n / 2 - 1;
    RUN(i, n / 2 + 1, n) {
        cout << s[i][i] - s[i][k] - s[k][i] + s[k][k] - tmp << " ";
        tmp = s[i][i] - s[i][k] - s[k][i] + s[k][k];
        k--;
    }
}