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

#define fsize(array) (array).begin(), (array).end()
#define bsize(array) (array).rbegin(), (array).rend()

typedef long long ll;
typedef unsigned long long ull;
typedef vector <ll> vll;
typedef unordered_map <ll, ll> table4l;
typedef unordered_map <string, ll> tablesl;

const ll MAXN = 1e18;
const ll MINN = -1e18;
const ll MOD = 1e9 + 9;

int main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif

    ll N;

    cin >> N;

    vll A(N + 1), dp(N + 1, 0), prefix(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        prefix[i] = prefix[i - 1] + A[i];
    }

    dp[0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            if (prefix[i] - prefix[j - 1] >= 0) {
                dp[i] = (dp[i] + dp[j - 1]) % MOD;
            }
        }
    }

    cout << dp[N] << endl;

    return 0;
}
