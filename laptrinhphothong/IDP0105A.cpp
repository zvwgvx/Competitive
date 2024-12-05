#include <iostream>
#define RUN(i, a, b) for (int i = a; i <= b; ++i)
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    int a[n + 1], d[n + 1];
    d[0] = 0;
    RUN(i, 1, n) {
        cin >> a[i];
        d[i] = max(d[i - 1], d[i - 1] + a[i]);
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << d[r] - d[l - 1] << '\n';
    }
    return 0;
}