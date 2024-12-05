#include<iostream>
#include <math.h>
#include <algorithm>
#define ll long long
#define lcm(a,b) a*b / __gcd(a, b)
#define FOR1(i,n) for(int i = 1; i <= n; i++)
#define FOR(j,i,n) for(int j = i + 1; j <= n; j++)
using namespace std;
const ll N = 1e2 + 3;
ll a[N],dem;
signed main() {
    ll n, k;
    cin >> n >> k;
    FOR1(i,n) cin >> a[i];
    FOR1(i,n) {
		FOR(j,i,n) {
            if(lcm(a[i], a[j]) <= k && lcm(a[i], a[j]) > 0) dem++;
		}
	}
    cout << dem;
    return 0;
}   
