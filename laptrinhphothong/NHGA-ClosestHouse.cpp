#include <iostream>
#include <algorithm>
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
using namespace std;
int n, a[100005], kq = 1000000005;

int main() {
	cin >> n;
	RUN(i, 1, n) cin >> a[i];
	sort(a + 1, a + n + 1);
	RUN(i, 2, n) kq = min(kq, a[i] - a[i - 1]);
	cout << kq;
	return 0;
}
    