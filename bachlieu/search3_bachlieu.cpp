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
    
    ll N, queries;

    cin >> N >> queries;

    while (queries--) {
        ll query;
        cin >> query;
        
        ll left = 1, right = N, result = N;

        while (left <= right) {
            ll mid = left + ((right - left) >> 1);
            ll value = mid * mid + 1;

            if (value >= query) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        cout << result * result + 1 << '\n';
    }    
    return 0; 
}