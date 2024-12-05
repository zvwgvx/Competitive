#include <iostream>
#include <algorithm> 
#define RUN for (ll i = 1; i <= n; ++i)
#define ll long long 
using namespace std;
int main() {
	ll n;
	cin >> n;
	ll a[n + 1], b[n + 1];
	RUN {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b + 1, b + 1 + n);
	ll dem = 0;
	RUN{
		if (a[i] == b[1] || a[i] == b[2] || a[i] == b[3] || a[i] == b[4]) {
			cout << i << ' ';
			++dem;
		}
		if(dem == 4) return 0;
	}
}
