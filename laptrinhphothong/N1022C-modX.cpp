#include <iostream>
#define amodx a % x == 0
#define ll long long
using namespace std;
ll a, b, x;
int main() {
    cin >> a >> b >> x;
    ll dem = (b / x) - (a / x);
    if (amodx) {
        dem++;
    }
    cout << dem;
    return 0;
}
