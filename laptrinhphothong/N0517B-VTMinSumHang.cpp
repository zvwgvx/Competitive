#include <iostream>
#define ulli unsigned long long int
using namespace std;
const ulli N = 101;
int main() {
    ulli n,m, a[N][N],vtmin = 0;
    cin >> m >> n;
    for (ulli i = 1; i <= m; ++i) {
        for (ulli j = 1; j <= n; ++j) cin >> a[i][j];
    }
    ulli min = 2147483647;
    for (ulli i = 1; i <= m; ++i) {
        ulli s = 0;
        for (ulli j = 1; j <= n; ++j) {
            s += a[i][j];
        }
        if (s < min){
            min = s;
            vtmin = i;
        }
    }
    cout << vtmin;
    return 0;
}
