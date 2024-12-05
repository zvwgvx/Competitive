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
            freopen ("TRICK.inp", "r", stdin);
            freopen ("TRICK.out", "w", stdout);
    #endif
    
    ll a, b, c, d, result = 0;
    cin >> a >> b >> c >> d;

    while (a > 0 && b > 0 && c > 0 && d > 0) {
        result++;
        if (a < b) swap (a, b);
        if (c > d) swap (c, d);
        a -= c;
        d -= b;
    }
    if (a == d) {
        cout << "YES" << endl << result;
        return 0;
    } else cout << "NO";
    return 0; 
}