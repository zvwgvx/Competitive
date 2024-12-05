#include <iostream>
#define faster ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define RUN(i, begin, end) for (int i = 1; i <= n; ++i)
#define ll long long
using namespace std;
ll t, n, l, r, mid, kq;

bool O(ll x) {
	ll s = 0;
	while (x >= 5) {
		x /= 5;
		s += x;
	}
	return s >= n;
}

int main() {
	faster
	cin >> t;
	RUN(i, 1, t) {
		cin >> n;
		l = 0, r = 1e18, kq = 0;
		while (l <= r) {
			mid = l + (r - l) / 2;
			if (O(mid)) kq = mid, r = mid - 1;
			else l = mid + 1;
		}
		cout << kq << "\n";
	}
	return 0;
}
