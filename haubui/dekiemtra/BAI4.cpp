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

bool isValid(const vector<ll>& a, ll L, ll K) {
    ll sum = 0;
    
    for (ll i = 0; i < L; i++) {
        sum += a[i];
    }

    if (sum > K) return false;

    for (ll i = L; i < a.size(); i++) {
        sum += a[i] - a[i - L];
        if (sum > K) return false;  
    }
    
    return true;
}

signed main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    ll N, K;
    cin >> N >> K;

    vll lst(N);
    for (ll i = 0; i < N; i++) {
        cin >> lst[i];
    }

    ll left = 1, right = N, maxL = -1;

    while (left <= right) {
        ll mid = (left + right) >> 1;
        if (isValid(lst, mid, K)) {
            maxL = mid; 
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << maxL << endl;

    return 0;
}
