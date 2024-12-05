#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long x = 1, y = n;

    for (long long i = 2; i * i <= n; ++i) {
        if (n % (i * i) == 0) {
            x = i;
            y = n / (x * x);
        }
    }

    if (x == 1 && y == 1) {
        cout << 1 << endl;
    } else if (y == 1) {
        cout << x << endl;
    } else if (x == 1) {
        cout << y << endl;
    } else {
        cout << x << " " << y << endl;
    }

    return 0;
}
