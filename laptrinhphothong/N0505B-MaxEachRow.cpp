#include <bits/stdc++.h>
#define ll long long
#define FOR1(i,mn) for (i = 0; i < mn; i++)
#define FOR(i,mn,n) for (i = 0; i < mn; i += n)
using namespace std;
int main() {
	ll m, n, i, t;
	cin >> m >> n;
	vector<ll> a;
	ll mn = m * n;
	FOR1(i,mn){
		cin >> t;
		a.push_back(t);
	}
	FOR(i,mn,n){
		vector<ll>::iterator kq = max_element(a.begin() + i, a.begin() + i + n);
		cout << *kq << endl;
	}
}