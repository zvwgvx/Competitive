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

int main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif

    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    vector<int> dp(n, 1); 
    vector<int> cnt(n, 1); 

    int maxLength = 1; 
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (A[i] > A[j]) {
                if (dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                } else if (dp[i] == dp[j] + 1) {
                    cnt[i] += cnt[j];  
                }
            }
        }
        maxLength = max(maxLength, dp[i]);
    }

    int result = 0;
    for (int i = 0; i < n; ++i) {
        if (dp[i] == maxLength) {
            result += cnt[i];
        }
    }

    cout << maxLength << endl;
    cout << result << endl;

    return 0;
}
