#include <iostream>
#include <algorithm>
#define ulli unsigned long long int
#define RUN for (ulli i = 1; i <= n; ++i)
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ulli n, a[100001], b[100001], kq = 0;
int main() {
	FASTER;
	cin >> n;
	RUN cin >> a[i];
	RUN cin >> b[i];
	sort(a + 1, a + n + 1); // sort 2 mảng tăng 
	sort(b + 1, b + n + 1);
	RUN{
		kq += abs(a[i] - b[i]); // | a(i)min - b(i)min| min
	}
	cout << kq;
}
