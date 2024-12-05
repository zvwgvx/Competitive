#include <iostream>
using namespace std;
void HNTower(int n, int a, int b, int c) {
	if (n == 1) {
		cout << a << " " << c << endl;
		return;
	}
	HNTower(n - 1, a, c, b);
	HNTower(1, a, b, c);
	HNTower(n - 1, b, a, c);
}
int main() {
	int n, a = 1, b = 2, c = 3;
	cin >> n;
	HNTower(n, 1, 2, 3);
}