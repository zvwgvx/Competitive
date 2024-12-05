#include <iostream>
#include <cstring>
#define ll long long
#define RUN(i, a, b) for (int i = a; i <= b; ++i)
using namespace std;
ll a[1000009];
#define nmax 1000009
int main() {
    memset(a, 0, sizeof(a));
    RUN(i, 1, nmax) {
        for (ll j = i; j <= nmax; j += i)
            if (i != j) a[j] += i;
    }
    ll l, r, res = 0;
    cin >> l >> r;
    RUN(i, l, r) {
        if (a[i] <= r && a[i] >= l && a[a[i]] == i)  { // cout<<i<<" "<<a[a[i]];
            ++res;
        }
        a[i] = 0;
    }
    cout << res;
}