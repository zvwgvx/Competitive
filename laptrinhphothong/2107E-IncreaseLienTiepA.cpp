#include <iostream>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define RUN for (int i = 1; i <= n; i++)
#define maxn 100005
int n, a[maxn], f[2][maxn], max_length;
int main() {
    faster;
    cin >> n;
    RUN cin >> a[i];
    a[0] = -1e9;
    RUN {
        if (a[i] > a[i - 1]) f[0][i] = f[0][i - 1] + 1, f[1][i] = f[1][i - 1] + 1;
        else f[0][i] = 1, f[1][i] = 1;
        if (i > 1) {
            if (a[i] > a[i - 2] + 1) f[1][i] = max(f[1][i], f[0][i - 2] + 2);
        }
        max_length = max(max_length, f[1][i]);
        max_length = max(max_length, min(f[0][i] + 1, n));
    }
    cout << max_length;
    return 0;
}
