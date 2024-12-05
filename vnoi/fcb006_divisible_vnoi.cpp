//Zang Vũ   
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

inline ll count(ll left, ll right, ll target) {
    ll start = left / target, end = right / target;
    if (left % target != 0) start++;
    return end - start + 1;
}

int main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif

    int queries;
    cin >> queries;
    while (queries--) {
        ll left, right;
        cin >> left >> right;
        ll result = count(left, right, 4) + count(left, right, 7) + count(left, right, 11)
                  - count(left, right, 28) - count(left, right, 44) - count(left, right, 77)
                  + count(left, right, 308);
        cout << result << endl;
    }
}
