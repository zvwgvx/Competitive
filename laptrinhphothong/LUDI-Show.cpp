#include <iostream>
#include <algorithm>
#define ll long long
#define RUN(i, begin, end) for(int i = begin; i <= end; ++i)
using namespace std;
const ll N = 1e6 + 17;
typedef pair<ll, ll> pll;
pair<ll, ll> a[N];
ll n, k, kq;

bool compare(pll x, pll y) {
	return x.second < y.second;
}

int main() {
	cin >> n;
	RUN(i, 1, n) {
	    cin >> a[i].first >> a[i].second;
	}
	sort(a + 1, a + n + 1, compare);
	k = a[1].second;
	kq = 1;
	RUN(i, 2, n) {
		if (a[i].first > k) {
			++kq;
			k = a[i].second;
		}
	}
	cout << kq;
	return 0;
}
