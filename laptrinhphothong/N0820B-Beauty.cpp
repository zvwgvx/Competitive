#include <iostream>
#define RUNP for (int i = 2; i * i <= n; ++i)
#define ll long long
using namespace std;
bool check(long long n) {
    RUNP {
        if (n % i == 0) return false;
    }
    return n > 1;
}
bool dep(ll n) {
    ll s = 0;
    while (n != 0) {
        s += (n % 10) * (n % 10);
        n /= 10;
    }
    if (check(s) == true) return true;
    else return false;
}
int main() {
    ll n, nbeauty = 1, dem = 0;
    cin >> n;
    while (0 < 1) {
        ++nbeauty;
        if (dep(nbeauty)) ++dem;
        if (dem == n) break;
    }
    cout << nbeauty;
}