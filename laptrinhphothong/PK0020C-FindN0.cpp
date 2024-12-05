#include <bits/stdc++.h>
#include <math.h>
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
using namespace std;

void Sieve(int n, bool prime[]) {
	memset(prime, true, n + 1);
	prime[0] = false;
	prime[1] = false; 
	RUN(i, 2, trunc(sqrt(n))) {
		if (prime[i] == true) {
			RUN(j, i, trunc(n / i)) prime[i * j] = false;
		}
	}
} 

int main() {
	int n, i, j;
	cin >> n;
	bool prime[n + 1];
	bool check = false;
	Sieve(n, prime);
	RUN(i, 2, n) {
		if (prime[i] == true) {
			RUN(j, i, n - i) {
				if (prime[j] == true && prime[n - i - j] == true) {
					if (n - i - j >= j && j >= i) {
						printf("%d %d %d\n", i, j, n - i - j);
						check = true;
					}
				}
			}
		}
	}
	if (check == false) cout << "-1";
}