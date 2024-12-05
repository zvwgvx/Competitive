#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll coinCount(ll h) {
    return h * (h + 1) / 2;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;

    ll left = 1, right = 1e9, result = 0;
    while (left <= right) {
        ll mid = left + (right - left) / 2;
        if (coinCount(mid) <= n) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << result << endl;
    return 0;
}
