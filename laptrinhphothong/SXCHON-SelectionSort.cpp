#include <bits/stdc++.h>
#define RUN(i, a, b) for (ll i = a; i <= b; ++i)
#define ll long long
using namespace std;
const ll N = 1e6;
ll n, a[N];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    RUN(i, 1, n)  cin >> a[i];   
    for (ll i = 1; i < n; i++) {
        ll m = a[i], mi = i;
        RUN(j, i + 1, n) {
            if (m > a[j]) {
                m = a[j];
                mi = j;
            }
        }
        swap(a[i], a[mi]);
        RUN(k, 1, n) {
            if (k == i || k == mi)   cout << "[" << a[k] << "] ";
            else cout << a[k] << " ";
        }
        cout << '\n';
    }
}
    