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

    ll N, W;
    cin >> N >> W;

    vll a(N), b(N);
    for (int i = 0; i < N; ++i) {
        cin >> b[i] >> a[i];  
    }

    vll dp(W + 1, 0);

    for (int i = 0; i < N; ++i) {
        for (int j = W;  j >= b[i]; --j) {
            dp[j] = max(dp[j], dp[j - b[i]] + a[i]);
        }   
    }

    ll result = *max_element(dp.begin(), dp.end());


    if (result == 0) {
        cout << -1 << endl;  
    } else {
        cout << result << endl; 
    }

    return 0;
}
