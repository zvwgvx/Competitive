#include <iostream>
#define ll long long 
using namespace std;
ll x, y, n ;
int main() {
	cin >> x >> y >> n;
	cout << (x *  ((n - y) / x)) + y;
	return 0;
}
