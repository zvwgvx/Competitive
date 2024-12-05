#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n, t, x;
	cin >> n >> t;
	while (t--) {
		cin >> x;
		int N = sqrt(x);
		if (N * N + 1 < x){
			N++;
		}
		cout << N * N + 1 << endl;
	}
}
