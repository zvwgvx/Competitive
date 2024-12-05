#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long n, i = 1, k = 0,a[n];
	cin >> n;
	while (i <= n) {
		cin >> a[i];
		if (a[i] == 1) ++k;
		else{
			--k;
		}
		++i;
	}
	cout << abs(k);
}