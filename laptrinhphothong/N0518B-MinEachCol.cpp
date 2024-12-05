#include <iostream>
#define RUNHANG for (ulli i = 1; i <= m; ++i)
#define RUNCOT for (ulli j = 1; j <= n; ++j)
#define ulli unsigned long long int
using namespace std;
int main() {
	ulli m, n, a[101][101];
	cin >> m >> n;
	RUNHANG {
		RUNCOT cin >> a[i][j];
	}
	ulli min = 2147483627;
	RUNHANG {
		ulli s = 0;
		RUNCOT {
			s += a[j][i];
		}
		if (s < min) min = s;
	}
	cout << min;
	return 0;
}
