#include <iostream>
#include <vector>
#include <math.h>
#include <bitset>
#include <cctype>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <climits>

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
const int MAX_VALUE = 1000000; 

int main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif

    int N;
    cin >> N;
    vector<int> a(N);
    
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    vector<int> index(2 * MAX_VALUE + 1, INT_MAX);

    for (int i = 0; i < N; i++) {
        int value = a[i] + MAX_VALUE; 
        index[value] = min(index[value], i + 1); 
    }
   
    for (int i = 1; i <= 2 * MAX_VALUE; i++) {
        index[i] = min(index[i], index[i - 1]);
    }

    int q;
    cin >> q;
    vector<int> queries(q);
    
    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }

    for (int i = 0; i < q; i++) {
        int k = queries[i];
        int idx = index[k + MAX_VALUE]; 
        cout << idx << endl;
    }

    return 0;
}
