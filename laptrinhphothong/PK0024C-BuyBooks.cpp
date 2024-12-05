#include <iostream>
#include <algorithm>
using namespace std;
void BuyBooks(int i, int n, int d, int a[]) {
	if (n == 0) {
		for (int j = 0; j < d; j++) {
			cout << a[j] << " ";
		}
		cout << '\n';
		return;
	}
	for (int j = i; j <= n; j++) {
		if (n - j >= 0) {
			a[d] = j;
			BuyBooks(j + 1, n - j, d + 1, a);
		}
	}
}
int main() {
	int n;
	cin >> n;
	int a[n];
	BuyBooks(1, n, 0, a);
	return 0;
}
    