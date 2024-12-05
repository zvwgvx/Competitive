//http://vinhdinhcoder.net/Problem/Details/5027
#include <iostream>
#define RUN(i, a, b) for (int i = a; i <= b; ++i) 
using namespace std;

int main() {
	int cows, beef;
	cin >> cows >> beef;
	int F[cows + 2 + beef];
	RUN(i, 1, beef + 1) F[i] = 1;
	RUN(i, beef + 2, cows + 1 + beef) { // cows + 2 + beef - 1
		F[i] = (F[i - 1] + F[i - 1 - beef]) % 1000000;
	}
	cout << F[cows + 1 + beef]; // cows + 2 + beef - 1
	return 0;
}
