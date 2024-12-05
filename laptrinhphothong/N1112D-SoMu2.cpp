#include <iostream>
using namespace std;
long long nhan(long long a, long long b, long long mod) {
    a %= mod;
    b %= mod;
    long long q = (long double)a * b / mod;
    return ((a * b - q * mod) % mod + mod) % mod;
}
long long mu(long long x, long long y, long long z)
{
    if (y == 0) return 1;
    if (y == 1) return x % z;
    long long r = mu(x, y / 2, z);
    r = nhan(r, r, z);
    if (y % 2 == 1) r = nhan(r, x, z);
    return r;
}
int main() {
    long long n, k;
    while (cin >> n >> k) cout << nhan(mu(2, n, k), (n - 1), k) + 1 << '\n';
}