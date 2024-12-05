#include <iostream>
#include <vector>
#include <algorithm>
#define RUNK for (int i = 1; i <= k; i++)
#define RUNVIPOD for (int i = vipot; i <= n; i++)
#define RUNKN for (int i = k + 1; i <= n; i++)
#define RUNNK for (int i = 2; i <= n - k; i++)
using namespace std;
vector<int> a;
vector<bool> x;
int n, k;
void COUT() {
	RUNK {
		cout << a[i] << " ";
	}
	cout << "\n";
}
void LisToHop(long long pos, long long vipot) {
	if (pos > k) {
		COUT();
		return;
	}
	RUNVIPOD {
		if (!x[i]) {
			a[pos] = i;
			x[i] = 1;
			LisToHop(pos + 1, i + 1);
			x[i] = 0;
		}
	}
}
int main() {
	cin >> k >> n;
	a.resize(20);
	x.resize(20);
	long long dem = 1;
	RUNKN dem *= i;
	RUNNK dem /= i;
	cout << dem << "\n";
	LisToHop(1, 1);
}
