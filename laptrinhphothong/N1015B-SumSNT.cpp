#include <iostream>
#define RUNAB for (long long i = a; i <= b; i++)
#define RUNCHECKPRIMES for (long long i = 2; i * i <= n; i++)
#define RUN for (long long l = i * i; l <= n; l += i)
#define N 200000002
using namespace std;
long long P[N];
void SieveOfErathosthene(long long n) {
	P[1] = 0;
	RUNCHECKPRIMES {
		if (P[i] == 1) {
			RUN P[l] = 0;
		}
	}
}
int main() {
	long long a, b, sum = 0;
	cin >> a >> b;
	fill(P + 1, P + b + 1, 1);
	SieveOfErathosthene(b);
	RUNAB {
		if (P[i] == 1) sum += i;
	}
	cout << sum;
}