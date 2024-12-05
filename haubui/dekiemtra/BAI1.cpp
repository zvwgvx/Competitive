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

    ll T;
    cin >> T;
    while (T--) {
        ll N;
        cin >> N;
        ll count = (N / 3) + (N / 5) - (N / 15);
        cout << count << endl;
    }
    return 0;
}
