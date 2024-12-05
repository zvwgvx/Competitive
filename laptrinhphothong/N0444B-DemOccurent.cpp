#include <iostream>
#define FOR(i,n) for (ulli i = 1; i <= n; ++i)
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ulli unsigned long long int
using namespace std;
const int N = 1e6 + 7;
ulli a[N],n, dem[N], anotherdem[N];
int main() {
    FASTER;    
    cin >> n;
    FOR(i,n) {
        cin >> a[i];
        ++dem[a[i]];
    }
    // sort(a + 1, a + n + 1);
    FOR(i,n) { 
        ++anotherdem[a[i]];
        if (anotherdem[a[i]] == 1) cout << a[i] << ' ' << dem[a[i]] << '\n';
    }
}