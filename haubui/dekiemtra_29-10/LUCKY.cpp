#include <iostream>
#include <vector>
#include <math.h>
#include <bitset>
#include <cctype>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

using namespace std;

#define v vector
#define umap unordered_map
#define uset unordered_set
#define ll long long
#define up upper_bound
#define low lower_bound
#define bin binary_search
#define f(array) (array).begin(), (array).end()
#define b(array) (array).rbegin(), (array).rend()

signed main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("LUCKY.inp", "r", stdin);
            freopen ("LUCKY.out", "w", stdout);
    #endif
    
    ll N;

    cin >> N;

    v <ll> odd, even;

    for (int i = 0; i < N; ++i) {
        ll value;
        cin >> value;
        if (value & 1) odd.push_back(value);
        else even.push_back(value);
    }

    sort (b(odd));
    sort (b(even));

    cout << max(odd[0] + odd[1], even[0] + even[1]);
    return 0;   
}