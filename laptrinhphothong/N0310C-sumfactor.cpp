#include <iostream>
#define ll long long
using namespace std;
#define RUN(i, begin, end) for (ll i = begin; i <= end; i++)
int main() {
    ll n, s = 0, f = 1;
	cin >> n;
	ll mod = 1e9 + 7;
	RUN(i, 1, n) {
		f = (f * i) % mod;
		s = (s + f) % mod;
	}
	cout << s;
}
