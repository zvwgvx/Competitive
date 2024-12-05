#include <iostream>
using namespace std;
#define RUN(i,n) for (int i = 1; i <= n; ++i)
#define FOR(j,n) for (int j = 1; j <= n; ++j)
long long n, a[120][120], MAX = 0;
int sum(int i, int j) {
	long s = a[i][j];
	while (i < n && j < n) { // while (i < n & j > 1)
		++i;
		++j; // j--
		s += a[i][j];
	}
	if (s > MAX) MAX = s;
}
int main() {
	cin >> n;
	RUN(i,n) {
		FOR(j,n) cin >> a[i][j];
	}
	RUN(i,n) { // run(1 <- n)
		sum(1, i);
		sum(i, 1); // sum(i,n)
	}
	cout << MAX;
}