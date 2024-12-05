#include <iostream>
#include <algorithm>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define maxn 100005
#define MOD 1000000007
using namespace std;
#define RUN for (int i = 1; i <= n; i++)
long long n, a[maxn], l, r, s[maxn], socachtachmang[maxn], sf1fi[maxn];
int main() {
    faster;
    cin >> n >> l >> r;
    RUN cin >> a[i], s[i] = s[i - 1] + a[i];
    socachtachmang[0] = sf1fi[0] = 1;
    sf1fi[-1] = 0;
    RUN {
        long long s1 = s[i] - r, s2 = s[i] - l;
        int p1 = lower_bound(s, s + i, s1) - s - 1, p2 = upper_bound(s, s + i, s2) - s - 1;
        socachtachmang[i] = (socachtachmang[i] + sf1fi[p2] - sf1fi[p1] + MOD) % MOD;
        sf1fi[i] = (sf1fi[i - 1] + socachtachmang[i]) % MOD;
    }
    cout << socachtachmang[n];
    return 0;
}