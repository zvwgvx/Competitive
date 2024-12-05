#include <iostream>
#define ull unsigned long long
#define FOR(i,n) for (ull i = 1; i*i <= n; i++)
#define nmodi n % i == 0 
using namespace std;
int main() {
	ull n,s = 0;
	cin >> n;
	FOR(i,n){
		if (nmodi) {
			ull j = n / i;
			if (i == j) s += i;
			else s += i + j; 
		}
	}
	cout << (s);
	return 0;
}