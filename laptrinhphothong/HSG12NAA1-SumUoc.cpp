#include <iostream> 
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll a, b, sum = 0;
    cin >> a >> b;
    for (ll i = 1; i * i <= a; ++i) {
        ll x = a / i;
        if (a % i == 0 && b % (3 * i) == 0){
            if (i * i == a) sum += i;
            else {
                sum += i;
                ll x = a / i;
                if ((b % (3 * x)) == 0) sum += x;
            }
        }
        else if (a % x == 0 && b % (3 * x) == 0) {
            if (x * x == a) sum += x;
            else {
                sum += x;
                if (b % i == 0) sum += i;
            }
        }
    }
    cout << sum;
    return 0;
}