#include <iostream>
using namespace std;
int main() {
    int n, i, dem = 0;
    cin >> n;
    long long a[100];
    a[0] = 1;
    a[1] = 1;
    for (i = 2; i < 100; i++) {
        a[i] = a[i - 1] + a[i - 2];
        if (a[i] > n) {
            dem = 1;
            n -= a[i - 1];
            break;
        }
    }
    while (n > 0) {
        for (i; i >= 0; i--) {
            if (a[i] <= n) {
                dem += 1;
                n -= a[i];
            }
        }
    }
    cout << dem;
}