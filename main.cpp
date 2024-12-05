#define _CRT_SECURE_NO_WARNINGS
#define _CRT_DISABLE_PERFCRIT_LOCKS
#pragma GCC optimize("fast-math")
#pragma GCC optimize("no-stack-protector") 
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>

using namespace std;

#define v vector
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define f(array) (array).begin(), (array).end()
#define b(array) (array).rbegin(), (array).rend()

double am_calc (const v <ll> prefix, ll left, ll right) {
    return (double)(prefix[right] - prefix[left]) / (right - left + 1);
}

signed main() { 
    cin.tie(nullptr), cout.tie(nullptr) 
    -> ios_base::sync_with_stdio(false);

    #define file "main"
    #ifndef ONLINE_JUDGE
            freopen (file ".inp", "r", stdin);
            freopen (file ".out", "w", stdout);
    #endif  

    ll N;

    cin >> N;
    
    v <ll> array(N), prefix(N + 1, 0);

    for (int i = 0; i < N; ++i) {
        cin >> array[i];
        prefix[i] = prefix[i - 1] + array[i];    
    }

    

    return 0;   
}