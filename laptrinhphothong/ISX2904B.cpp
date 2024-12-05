//http://laptrinhphothong.vn/ckfinder/userfiles/files/ISX2904B.pdf
#include <iostream>
#include <algorithm>
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
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
	RUN(i, 1, n) cin >> a[i].first;
	RUN(i, 1, n) cin >> a[i].second;
    sort(a + 1, a + n + 1, SORT);
	RUN(i, 1, n) cout << a[i].first << " " << a[i].second << endl;
}