#include <iostream>
using namespace std;
long long n, s = 0;
pair<long long, long long> a[1000005];
int main() {
    cin >> n;
    for (long long i = 1; i <= n; i++) cin >> a[i].first >> a[i].second;
    a[n + 1] = a[1];
    for (long long i = 1; i <= n; i++) {
        s += (a[i + 1].first - a[i].first) * (a[i + 1].second + a[i].second);
    }
    s = abs(s);
    if (s % 2 == 0) cout << s / 2 << " " << 1;
    else cout << s << " " << 2;
}