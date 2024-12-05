//http://laptrinhphothong.vn/Problem/Details/5784
#include <iostream>
#define RUN0(i ,a, b) for (int i = a; i < b; ++i)
#define RUN(i, a, b) for (int i = a; i <= b; ++i)
using namespace std;

bool check(int left, int right, int a[]) {
	int middle = (left + right) / 2;
	for (int i = left; i <= middle; i++) {
		if (a[i] != a[right - i]) return false;
	}
	return true;
}

int main() {
	int n, length = 0;
	cin >> n;
	int a[n];
	RUN0(i, 0, n) cin >> a[i];
	RUN0(i, 0, n - 1) {
		RUN0(j, i + 1, n) {
			if (a[i] == a[j]) {
				if (a[i + 1] == a[j - 1]) {
					if (check(i, j, a) == true) length = max(length, j - i + 1);
				}
			}
		}
	}
	cout << length;
}
