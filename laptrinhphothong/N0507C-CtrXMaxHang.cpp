#include <iostream>
#include <map>
#define RUNHANG for (int i = 1; i <= m; i++)
#define RUNCOT for (int j = 1; j <= n; j++)
using namespace std;
const int M = 1e3 + 1;
long long n, a[M][M], m;
map<int, int> dem;
int main() {
    cin >> m >> n;
    RUNHANG {
        RUNCOT cin >> a[i][j];
    }
    long long tong, MAX = 0, vt0dong = 0;
    RUNHANG {
        tong = 0;
        for (int j = 1; j <= n; j++) tong += a[i][j];
        if (MAX <= tong) {
            MAX = tong;
            vt0dong = i;
        }
    }
    RUNHANG {
        if (i == vt0dong) continue;
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
