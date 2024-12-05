#include <iostream>
#include <vector>
#include <math.h>
#include <bitset>
#include <deque>
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
    
    ll N, shift;

    cin >> N >> shift;

    deque <ll> dq(N);

    for (int i = 0; i < N; ++i) {
        cin >> dq[i];
    }

    while (shift--) {
        ll value = dq.front();
        dq.pop_front();
        dq.push_back(value);
    }

    cout << dq.front();
    return 0; 
}