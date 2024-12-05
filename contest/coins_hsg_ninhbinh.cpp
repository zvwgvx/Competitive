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

const ll MAXN = 1e7;
const ll MINN = -1e18;

int main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif

    ll n, m;

    pair<ll, ll> pll[MAXN + 1];

    cin >> n >> m;  
    for (int i = 1; i <= n; i++) {
        cin >> pll[i].second;  
    }
    for (int i = 1; i <= n; i++) {
        cin >> pll[i].first;  
        pll[i].first -= pll[i].second; 
    }
    
    
    sort(pll + 1, pll + n + 1);
    

    for (int i = 1; i <= n; i++) {
        if (pll[i].first <= m) {
            m += pll[i].second; 
        }
    }
    
    cout << m;  

    return 0;
}
