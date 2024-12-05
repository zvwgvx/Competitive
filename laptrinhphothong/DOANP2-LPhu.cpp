//http://ntucoder.net/Problem/Details/3333
#include <iostream>
#include <algorithm>
#define ll long long 
#define RUN(i, a, b) for (int i = a; i <= b; ++i)
using namespace std;
const int N = 1e6 + 17;
typedef pair<ll, ll> pll;
pll a[N];
ll n, k, res;

bool Compare(pll x, pll y) {
    return x.first < y.first; 
}

int main() {
    cin >> n;
    RUN(i, 1, n) cin >> a[i].first >> a[i].second;
    sort (a + 1, a + n + 1, Compare);
    RUN(i, 1, n) {
        if (k < a[i].second) {
            res += (a[i].second - max(a[i].first, k));
            k = a[i].second;
        }
    }
    cout << res;
    return 0;
}
    