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
            freopen ("EXPRE.inp", "r", stdin);
            freopen ("EXPRE.out", "w", stdout);
    #endif
    
    ll a, b ,c;

    cin >> a >> b >> c;

    cout << (a - b) * c;

    return 0;   
}