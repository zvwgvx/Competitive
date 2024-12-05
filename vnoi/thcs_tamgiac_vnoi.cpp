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
    
    ll query;
    
    cin >> query;

    while (query--) {
        ll A, B, C;

        cin >> A >> B >> C;

        ll D = max({A, B, C});
        if (A + B + C != 180 || A <= 0 || B <= 0 || C <= 0) {
            cout << "0 \n";
        } else if (D == 90) {
            cout << "VUONG" << '\n';
        } else if (D > 90) {
            cout << "TU" << '\n';
        } else if (D < 90) {
            cout << "NHON" << '\n';
        } else {
            cout << "0 \n";
        }
    }

    return 0; 
}