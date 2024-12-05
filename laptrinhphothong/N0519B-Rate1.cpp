//http://laptrinhphothong.vn/Problem/Details/5778
#include <iostream>
#define ulli unsigned long long int
#define RUN(i, begin, end) for (ulli i = begin; i <= end; ++i)
using namespace std;

int main() {
	ulli m, n, a[101][101], min = 2147483627;
	cin >> m >> n;
	RUN(i, 1, n) {
		RUN(j, 1, n) cin >> a[i][j];
	}
	RUN(i, 1, n) {
		ulli s = 0;
		RUN(j, 1, n) s += a[j][i];
		if (s < min) min = s;
	}
	cout << min;
	return 0;
}
    