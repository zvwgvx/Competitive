#include<iostream>
#define FOR(i,n) for(int i = 1 ; i <= n ; ++i)
#define FOR1(i,n,dem) for(int i = 1 ; i <= n - dem ; ++i)
#define ll long long
#define mod 1000000000
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll n , a[100005]; 
signed main()
{
	FASTER;
	cin >> n;
	FOR(i,n) a[i] = i;
	ll dem = 0;
	while(dem != n - 1) {
		FOR1(i,n,dem)  {
			a[i] += a[i + 1];
			a[i] %= mod;
		}
		++dem;
	}
	cout << a[1] % mod;
}