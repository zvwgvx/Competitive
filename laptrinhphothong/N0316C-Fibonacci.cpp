#include <iostream>
#define FOR3(i,n) for (int i = 3; i <= n; ++i)
#define F1F2_1 F[1] = 1; F[2] = 1;
using namespace std;
const int N = 1e6;
const int mod = 1e9 + 7;
long long n, F[N];
int main() {
	F1F2_1;
	cin >> n;
	FOR3(i,n){
		F[i] = ((F[i - 1]%mod) + (F[i - 2]%mod)) % mod;
	}
	cout << F[n];
	return 0;
}