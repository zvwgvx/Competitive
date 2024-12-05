#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
typedef pair<ll, ll> pll;
ll n, s, m;
pll a[1000001];
bool SORT(pll a, pll b) {
	if(a.first == b.first) return a.second > b.second;
	return a.first < b.first;
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> a[i].first;
	for (int i = 1; i <= n; ++i) cin >> a[i].second;
    sort(a + 1, a + n + 1, SORT);
	for (int i = 1; i <= n; ++i) cout << a[i].first << " " << a[i].second << endl;
}