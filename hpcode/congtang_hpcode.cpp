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

    
    ll N, max_length = -1e18;

    cin >> N;
    v <ll> lst(N + 1), dp(N + 1, 1);

    for (int i = 1; i < N + 1; ++i) {
        cin >> lst[i];
    }

    for (int i = 1; i < N + 1; ++i) {
        for (int j = 1; j < i; ++j) {
            if (lst[i] > lst[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        max_length = max(dp[i], max_length);
    }   

    cout << max_length;
    return 0;   
} 