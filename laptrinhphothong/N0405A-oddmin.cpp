#include <iostream>
#define FOR(i,n) for (int i = 1; i <= n; i++)
#define ale a % 2 != 0
using namespace std;
int main() {
	int n, a, min = -1, max;
	cin >> n;
	bool minInit = false;
	FOR(i,n) {
		cin >> a;
		if (ale) {
			if (!minInit || a < min) {
				minInit = true;
				min = a;
			}
		}
	}
	cout << min;
	return 0;
}