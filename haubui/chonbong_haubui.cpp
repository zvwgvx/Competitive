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

#define make(N) ii (N); cin >> (N);
#define vdp(N) vii dp((N), 0);
#define vlst(N) vii lst((N), 0);
#define vpre(N) vii prefix((N), 0);
#define vsuf(N) vii suffix((N), 0);
#define fsize(array) (array).begin(), (array).end()
#define bsize(array) (array).rbegin(), (array).rend()

typedef int ii;
typedef long long ll;
typedef unsigned long long ull;
typedef vector <ii> vii;
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
    
    ll N, K, result = 0;

    cin >> N >> K;

    vll lst(N);
    ll count[1000000];
    for (int i = 1; i <= N; ++i) {
        cin >> lst[i];
        count[lst[i]]++;
    }
    sort (count + 1, count + K + 1, greater <ll> ());

    ll i = 1;

    while(i <= K) {
        ll j = i + 1;
        if (count[j] == 0) break;
        while(count[i] > 0 && j <= K && count[j] > 0) {
            result += 2;
            count[i]--;
            count[j]--;
            j++;            
        }
        if (count[i] == 0) ++i;
    }
    cout << result;
    return 0; 
}