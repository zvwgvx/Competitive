#include <iostream>
using namespace std;
int main() {
    long long a, b, c, s = 0;
    cin >> a >> b >> c;
    a %= c, b %= c;
    long long q = (long double)a * b / c, res = (a * b - q * c) % c;
    cout << res;
}