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
    
    ll N, S, result = 0;

    cin >> N >> S;

    vll lst(N);
    table4l freq;

    for (int i = 0; i < N; ++i) {
        cin >> lst[i];
    }

    for (int i = 0; i < N; ++i) {
        result += freq[S - lst[i]];
        freq[lst[i]]++;
    }

    cout << result;
    return 0; 
}