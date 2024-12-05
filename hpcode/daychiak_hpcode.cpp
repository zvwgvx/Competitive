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

    ll n, k;
    cin >> n >> k;
    
    vll A(n);

    for (ll i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    ll prefix_sum = 0;      
    table4l rmd;
    
    rmd[0] = -1;
    ll max_length = 0;
    
    for (ll i = 0; i < n; i++) {
        prefix_sum += A[i];
        
        ll index = ((prefix_sum % k) + k) % k;
        
        if (rmd.find(index) != rmd.end()) {
            max_length = max(max_length, i - rmd[index]);
        } else {
            rmd[index] = i;
        }
    }
    
    cout << max_length << endl;
    
    return 0;
}
