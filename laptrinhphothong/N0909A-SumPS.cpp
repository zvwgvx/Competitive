#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
long long a, b, c, d, tu, mau, GCD;
int main() {
	cin >> a >> b >> c >> d;
	tu = a * d + b * c;
	mau = b * d;
	GCD = __gcd(tu, mau);
	tu /= GCD;
	mau /= GCD;
	cout << tu << " " << mau;
}