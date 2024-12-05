#include <iostream>
using namespace std;
#define FASTER ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N = 1e6 + 1;
long long n, a[N], mx[N], mn[N], ans = 0;
int main() {
    FASTER;
    cin >> n;
    mx[0] = -2147483647, mn[0] = +2147483647;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mn[i] = min(mn[i - 1], a[i]);
        ans = max(ans, a[i] - mn[i]);
    }
    cout << ans;
}
