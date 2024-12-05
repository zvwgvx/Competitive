//http://laptrinhphothong.vn/Problem/Details/5896
#include <iostream>
#include <algorithm>
#define RUN(i, begin, end) for (int i = begin; i < end; ++i)
using namespace std;

int main() {
	int n, max = 0;
	cin >> n;
	int a[n];
	RUN(i, 0, n) cin >> a[i];
	sort(a, a + n);
	RUN(i, 0, n) {
		if (n - i >= a[i]) max = a[i];
	}
	cout << max;
}