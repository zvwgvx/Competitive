#include <iostream>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
ll t, x, i;
unsigned long long gt;
int main() {
    fast;
    cin >> t;
    while (t--) {
        x, gt = 1, i = 2;
        cin >> x;
        if (x == 0) cout << 1 << '\n';
        else if (x == 1) cout << 2 << '\n';
        else if (x == 2) cout << 1 << '\n';
        else if (x > 2) {
            while (gt * i <= x) {
                gt *= i;
                i++;
            }
            if (gt == x) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
    }
}