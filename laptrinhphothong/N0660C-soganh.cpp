#include<iostream>
#include<string.h>
#define FOR3LENGTH(i,s) for(int i = 3 ; i <= s.length() ; i+= 2)
#define ll long long
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
string s;
signed main() {
	FASTER;
	cin >> s;
	ll dem = 0,valueganh = -1;
	if(s.length() >= 3) {
		FOR3LENGTH(i,s) {
			++dem;
			if(s.substr(0 , dem) == s.substr(s.length() - dem , dem)) valueganh = max(valueganh , dem);
		}
	}
	cout << valueganh;
}