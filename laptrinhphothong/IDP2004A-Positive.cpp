#include <iostream>
#define ll long long
using namespace std;
int main() {
	ll n, k, x, i, dem[100006];
	cin >> n >> k;
	dem[0] = 0;
	for (i = 1; i <= n; i++) {
		cin >> x;
		if (x > 0) dem[i] = dem[i - 1] + 1;
		else dem[i] = dem[i - 1];
	}
	for (i = 1; i <= k; i++) {
		cin >> x;
		cout << dem[x] << "\n";
	}
	return 0;
}