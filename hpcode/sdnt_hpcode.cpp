#define _CRT_SECURE_NO_WARNINGS
#define _CRT_DISABLE_PERFCRIT_LOCKS
#pragma GCC optimize("fast-math")
#pragma GCC optimize("no-stack-protector") 
#pragma GCC optimize("Ofast,unroll-loops")

#include <bits/stdc++.h>

using namespace std;

#define v vector
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define f(array) (array).begin(), (array).end()
#define b(array) (array).rbegin(), (array).rend()

const ll MAXQ = 1e6;
 
bitset<MAXQ> sieve(int N) {
    bitset<MAXQ> is_prime; 

    is_prime.set(); 

    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i * i <= N; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= N; j += i) {
                is_prime[j] = 0; 
            }
        }
    }
    return is_prime;
} 

ll reve(ll N) {
    ll rev = 0;
    while (N > 0) {
        rev = rev * 10 + N % 10;
        N /= 10;
    }
    return rev;
}

signed main() { 
    cin.tie(nullptr), cout.tie(nullptr) 
    -> ios_base::sync_with_stdio(false);

    #define file "main"
    #ifndef ONLINE_JUDGE
            freopen (file ".inp", "r", stdin);
            freopen (file ".out", "w", stdout);
    #endif  

    ll left, right;

    cin >> left >> right;

    bitset <MAXQ> is_prime = sieve(MAXQ);

    for (int i = left; i <= right; ++i) {
        if (is_prime[reve(i)]) {
            cout << i << '\n';
        }
    }
    return 0;   
}