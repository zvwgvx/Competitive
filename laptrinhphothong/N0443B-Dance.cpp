#include<iostream>
#include <map>
#define ll long long
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll a[100005] , n , k ; 
map<ll ,ll> Boys;
map<ll , ll> Girls;
int main() {
	FASTER;
	cin >> n >> k;
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i];
		if(a[i] > 0) Boys[a[i]]++;
		else Girls[abs(a[i])]++;
	}
	ll kq = 0 ;
	for(int i = 1500 ; i <= 2000 ; i++) {
		if(Boys[i] > 0) {
			for(int j = 0 ; j <= k ; j++) kq += Boys[i] * Girls[i - j]; 
		}
	}
	cout << kq;
}