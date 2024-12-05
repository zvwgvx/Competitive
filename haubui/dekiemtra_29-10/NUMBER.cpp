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
            freopen ("NUMBER.inp", "r", stdin);
            freopen ("NUMBER.out", "w", stdout);
    #endif
    
    ll N, result = 0;

    cin >> N;

    if (N & 1) {
        for (ll i = 1; i <= N; i += 2) {
            result += i * i;
        }
    } else {
        for (ll i = 2; i <= N; i += 2) {
            result += i * i;
        }
    } 

    cout << result;
    return 0;   
}