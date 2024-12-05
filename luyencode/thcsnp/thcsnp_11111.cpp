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

#define at auto
#define fsize(array) (array).begin(), (array).end()
#define bsize(array) (array).rbegin(), (array).rend()

typedef long long ll;
typedef unsigned long long ull;
typedef vector <ll> vll;
typedef unordered_map <ll, ll> table4l;
typedef unordered_map <string, ll> tablesl;

const ll MAXN = 1e18;
const ll MINN = -1e18;

inline bool is(ll value) {
    return !(value & 1);
}

signed main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif
    
    
    ll N, max_lenght = MINN;
 
    cin >> N;

    vll _lst(N + 1), _dp(N + 1, 0);

    for (int i = 1; i < N + 1; ++i) {
        cin >> _lst[i];
    }

    for (int i = 1; i < N + 1; ++i) {
        if (is(_lst[i])) {
            _dp[i] = _dp[i - 1] + 1;
            max_lenght = max(max_lenght, _dp[i]);
        }
    }

    cout << max_lenght << '\n';

    ll pos = 0;
    for (int i = N; i > 0; --i) {
        if (_dp[i] == max_lenght) {
            pos = i;
        }
    }

    vll _sub;
    for (int i = pos; _dp[i] != 0; --i) {
        _sub.push_back(_lst[i]);
    }

    reverse(fsize(_sub));

    for (at e: _sub) {
        cout << e << " ";
    }
    return 0; 
}