#include <iostream>
#define RUN for (ll i = 1; i <= n; i++)
using namespace std;
#define ll long long
int main() {
	ll n, x;
	cin >> n >> x;
	ll a[n];
	RUN cin >> a[i];
	RUN {
		if (a[i] == x) {
			cout << "Y";
			return 0;
		};
	}
	cout << "N";
}
