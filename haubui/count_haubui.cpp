#include <iostream>
#include <vector>
#include <math.h>
#include <bitset>
#include <cctype>
#include <string>
#include <algorithm>
#include <unordered_map>

#pragma GCC optimize("O3")

using namespace std;

#define make(N) ii (N); cin >> (N);
#define vdp(N) vii dp((N), 0);
#define vlst(N) vii lst((N), 0);
#define vpre(N) vii prefix((N), 0);
#define vsuf(N) vii suffix((N), 0);
#define fsize(array) (array).begin(), (array).end()
#define bsize(array) (array).rbegin(), (array).rend()

typedef int ii;
typedef long long ll;
typedef unsigned long long ull;
typedef vector <ii> vii;
typedef vector <ll> vll;
typedef unordered_map <ll, ll> table4l;
typedef unordered_map <string, ll> tablesl;

const ll MAXN = 1e18;
const ll MINN = -1e18;

signed main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("count.inp", "r", stdin);
            freopen ("count.out", "w", stdout);
    #endif
    
    ll N, X, queries;

    cin >> N >> X >> queries;

    vll lst(N + 1), dp(N + 1, 0);

    for (int i = 1; i <= N; ++i) {
        cin >> lst[i];
        if (lst[i] < X && lst[i] > 0) {
            dp[i] = dp[i - 1] + 1;
        } else {
            dp[i] = dp[i - 1];
        }
    }

    while (queries--) {
        ll left, right;

        cin >> left >> right;

        cout << dp[right] - dp[left - 1] << '\n';
    }
    return 0; 
}