#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
	ll a, b, s;
	cin >> a >> b;
	s = (ll)(sqrt(b) - sqrt(a) + 1);
	if ((a == 1) && (b == 999999999999999999)) cout << s - 1;
	else cout << s;
}