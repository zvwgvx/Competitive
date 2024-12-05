#include <iostream>
#include <algorithm>
#include <vector>
#define lli long long int
using namespace std;

int main() {
	lli n, m;
    cin >> n >> m;
    lli a[n + 1], res = 0;
    for(int i = 1; i <= n; i++) {
	    cin >> a[i] ;
		a[i] += a[i - 1];
	}
    for(int i = 1; i <= n; i++) {
        int j = upper_bound(a + 1, a + 1 + n, m + a[i - 1]) - a;
        res += j - i;
    }
    cout << res;
}
