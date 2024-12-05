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
#define median left + (right - left) >> 1
#define f(array) (array).begin(), (array).end()
#define b(array) (array).rbegin(), (array).rend()

inline ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * 1LL * b;
}

inline ll compare(ll x, ll a, ll b) {
    return (x / a) + (x / b) - (x / lcm(a, b));
}

signed main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif
    
    ll queries;

    cin >> queries;

    while (queries--) {
        ll A, B, N;

        cin >> A >> B >> N;
        
        ll left = 1, right = 1LL * N * max(A, B), mid;

        while (left < right) {
            mid = median;

            if (compare(mid, A, B) < N) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        cout << left << '\n';
    }

    return 0;   
}