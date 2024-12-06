#define _CRT_SECURE_NO_WARNINGS
#define _CRT_DISABLE_PERFCRIT_LOCKS
#pragma GCC optimize("fast-math")
#pragma GCC optimize("no-stack-protector") 
#pragma GCC optimize("Ofast,unroll-loops")

// #pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>

using namespace std;

#define v vector
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define f(array) (array).begin(), (array).end()
#define b(array) (array).rbegin(), (array).rend()

signed main() { 
    cin.tie(nullptr), cout.tie(nullptr) 
    -> ios_base::sync_with_stdio(false);

    #define file "main"
    #ifndef ONLINE_JUDGE
            freopen (file ".inp", "r", stdin);
            freopen (file ".out", "w", stdout);
    #endif  

    string s;
    cin >> s;
    ll count = 0;

    for (int i = 0; i < s.size(); ++i) {
        for (int j = i; j < s.size(); ++j) {
            ll num = 0;
            for (int k = i; k <= j; ++k) {
                num = num * 10 + (s[k] - '0');
            }
            if (num % 4 == 0) {
                count++;
            }
        }
    }

    cout << count;

    return 0;   
}