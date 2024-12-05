#pragma GCC optimize ("03")
#include <iostream>
using namespace std;
long long int n, a[1000001], m[1000001]; bool ok = 0;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        m[a[i]]++;
        if (m[a[i]] % 3 == 0) {
            cout << a[i] << ' ';
            ok = 1;
        }
    }
    if (!ok) cout << 0;
}