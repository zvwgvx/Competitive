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

signed main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif
    
    ll N, result = MINN;

    cin >> N;
    vll X(N), Y(N);

    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> Y[i];
    }

    sort (fsize(X));
    sort (fsize(Y));

    for (int i = 0; i < N; ++i) {
        result = max(result, abs(X[i] - Y[i]));
    }

    cout << result;
    return 0; 
}