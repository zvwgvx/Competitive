#include <iostream>
#include <vector>
#include <math.h>
#include <bitset>
#include <cctype>
#include <string>
#include <algorithm>
#include <map>

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
const ll MAXN = 1e18;
const ll MINN = -1e18;

signed main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif
    
    ll N, count = 0;

    cin >> N;

    map <ll, ll> freq;

    for (ll i = 2; i <= sqrt(N); ++i) {
        while (N % i == 0) {
            freq[i]++;  
            N /= i;
        }
    }

    if (N > 1) {
        freq[N]++;
    }
    cout << freq.size() << '\n';
    for (auto e : freq) {
        cout << e.first << " " << e.second << '\n';
    }

    return 0; 
}