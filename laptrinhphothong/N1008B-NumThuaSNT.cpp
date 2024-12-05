#include <iostream>
#include <math.h>
#define ll long long
using namespace std;
signed main() {
    ll n, i = 2, dem = 0;
    cin >> n;
    while (i * i <= n) {
        if(n % i == 0) ++dem;
        while (n % i == 0) {
            n /= i;
        }
        i++;
    }
    if (n > 1) dem++;
    cout << dem;
}