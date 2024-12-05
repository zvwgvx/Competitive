#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
#define RUN(i, a, b) for(int i = a; i <= b; ++i) 
using namespace std;
ll b, n, a[100005], t, k;
int main()
{
	cin >> n >> k;
	RUN(i, 1, n) cin >> a[i];
	RUN(i, 1, n) t = __gcd(t, a[i]);
	RUN(i, 2, sqrt(t)) {
		if (t % i == 0) {
			t = i;
			break;
		}
	}
	cout << k - k % t;
}