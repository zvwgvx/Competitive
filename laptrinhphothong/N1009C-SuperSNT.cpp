#include <iostream>
#define RUNP for (ll i = 2; i * i <= n; ++i)
using namespace std;
#define ll long long
ll n;
bool SNT(ll n) {
    if (n < 2) return false;
    RUNP {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    cin >> n;
    while (n > 0) {
        if (SNT(n) == false) {
            cout << "NO";
            return 0;
        }
        n /= 10;
    }
    cout << "YES";
}