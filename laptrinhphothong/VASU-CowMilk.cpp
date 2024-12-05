#include <iostream>
#include <algorithm>
#define RUN(i, begin, end) for (int i = begin; i < end; ++i)
using namespace std;
long long n, kq = 0, a[101];

int main() {
    cin >> n;
    RUN(i, 0, n) cin >> a[i];
    sort(a, a + n, greater<int>());
    RUN(i, 0, n) {
        if(a[i] >= i) kq += a[i] - i;
	}
    cout << kq;
    return 0;
}
    