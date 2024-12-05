#include <iostream>
#include <algorithm>
#define ll long long 
#define faster ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
const int N = 1e6 + 17;
typedef pair <int, int> pii;
ll n, k, MAX, posBC, s[N], savepos[N];
pii a[N];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i].first >> a[i].second;
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; ++i) {
        savepos[i] = a[i].first;
        s[i] = a[i].second + s[i - 1];
    }
    MAX = a[n].first;
    for(int i = 1; i <= MAX; ++i) {
        int x = upper_bound(savepos + 1, savepos + n + 1, i + k) - savepos - 1;
        int y = lower_bound(savepos + 1, savepos + n + 1, i - k) - savepos - 1;
        posBC = max(posBC, s[x] - s[y]); 
    }
    cout << posBC;
    return 0;
}
    