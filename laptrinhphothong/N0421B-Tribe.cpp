#include <bits/stdc++.h>
#define RUN(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
int n, c;
vector <int> mp;
signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    mp.assign(n + 2, 0);
    c = 0;
    RUN(i, 1, n) {
        int x;
        cin >> x;
        mp[x]++;
    }
    RUN(i, 1, n) {
        c += mp[i] / i;
    }
    cout << c;
    return 0;
}
