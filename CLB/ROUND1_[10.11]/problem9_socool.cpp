#include <bits/stdc++.h>

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC diagnostic ignored "-Wunused-parameter"

using namespace std;

#define int long long
#define active ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int MOD = 20232024;

int poww(int a, int b) {
    int res = 1;
    while(b) {
        if(b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

signed main() {
    active;
    int n;
    cin >> n;
    int fn = n;
    int res = 1;
    
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) {
            res = ((res % MOD) * ((poww(3, i) + i) % MOD)) % MOD;
            while(n % i == 0) n /= i;
        }
    }

    if(n != 1 && n != fn) {
        res = ((res % MOD) * ((poww(3, n) + n) % MOD)) % MOD;
    }

    cout << res;
    return 0;
}