#include <bits/stdc++.h>
#define ll long long
#define RUN(i, a, b) for (int i = a; i <= b; i++)
#define faster ios_base::sync_with_stdio(0);
using namespace std;
typedef pair<ll,ll> ii;
const ll N = 1e5 + 1;
ll exercises, level_before, dem;
ii a[100001];

bool cmp (ii x, ii y) {
    return x.first < y.first;
}

int main() {
    faster; cin.tie(0); cout.tie(0);
    cin >> exercises >> level_before;
    RUN(i, 1, exercises) cin >> a[i].first >> a[i].second;
    sort (a + 1, a + exercises + 1, cmp);
    RUN(i, 1, exercises) {
        if (level_before >= a[i].first) {
            ++dem;
            level_before += a[i].second;
        }
    }
    cout << dem;
    return 0;
}
    