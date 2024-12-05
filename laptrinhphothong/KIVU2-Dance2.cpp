#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define RUN(i, begin, end) for (ll i = begin; i <= end; ++i)
using namespace std;
typedef vector<ll> vi;
const ll N = 1e6 + 17;
ll n, pairnum;
vi boy, boy1, girl, girl1;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	RUN(i, 1, n) {
		ll x;
		cin >> x;
		if (x > 0) boy.push_back(x);
		else boy1.push_back(abs(x));
	}
	RUN(i, 1, n) {
		ll x;
		cin >> x;
		if (x > 0) girl.push_back(x);
		else girl1.push_back(abs(x));
	}
	sort(boy.begin(), boy.end());
	sort(boy1.begin(), boy1.end());
	sort(girl.begin(), girl.end());
	sort(girl1.begin(), girl1.end());
	ll i = 0, j = 0;
	while (i < boy.size() && j < girl1.size()) {
		if (boy[i] < girl1[j]) {
		    ++pairnum;
			++i;
			++j;
		}
		else ++j;
	}
	i = 0, j = 0;
	while (i < boy1.size() && j < girl.size()) {
		if (boy1[i] > girl[j]) {
		    ++pairnum;
			++i;
			++j;
		}
		else ++i;
	}
	cout << pairnum;
}
