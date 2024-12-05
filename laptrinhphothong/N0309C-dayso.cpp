#include <iostream>
#include <math.h>
#define ll long long
#define RUN(i, begin, end) for (ll i = begin; i <= end; ++i)
using namespace std;
const int mod = 1e9 + 7;
ll a[1000002], n;

int main() {
    cin >> n;
    // a[1] = a[2] = 1;
    // RUN(i, 3, n) {
    //     a[i] = ((3 * a[i - 1] % mod) - (a[i - 2] % mod)) % mod;
    //     if (a[i] < 0) a[i] = mod - a[i] * -1;
    // }
    // cout << a[n];
    cout << pow(n,2);
    return 0;
}
