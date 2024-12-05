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
    
    ll N;

    cin >> N;

    vll lst(N);

    for (int i = 0; i < N; ++i) {
        cin >> lst[i];
    }

    sort(fsize(lst));

    ll queries;

    cin >> queries;

    while (queries--) {
        ll query;

        cin >> query;

        ll pos = lower_bound(fsize(lst), query) - lst.begin() - 1;

        if (lst[pos + 1] == query) {
            cout << lst[pos + 1] << '\n';
        } else {
            cout << lst[pos] << '\n';
        }
    }
    return 0; 
}