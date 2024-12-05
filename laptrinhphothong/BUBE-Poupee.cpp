#include <bits/stdc++.h> 
#define RUN(i, a, b) for (int i = a; i <= b; ++i) 
#define ll long long
using namespace std;
int main () {
    ll poupees, k;
    cin >> poupees >> k;
    ll a[poupees];
    RUN(i, 1, poupees) cin >> a[i];
    sort(a + 1, a + poupees + 1, greater<int>());
    ll sum = 0,s = 1;
    RUN(i, 1, poupees) {
        if (a[s] - k >= a[i]) ++s;
        else sum += a[i];
    }
    cout << sum;
}
    