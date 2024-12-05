#include <iostream>
using namespace std;
#define ll long long
int main() {
	ll a, b, c, d;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (d < 0) {
		cout << -1;
		return 0;
	}
	if (a * c == 0){
		cout << 0;
		return 0;
	}
	if (d > 0) {
		cout << (a * c > 0 ? "1" : "2");
		return 0;
	}
	if (d == 0 && a * c != 0) {
		cout << 3;
		return 0;
	}
}
