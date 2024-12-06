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

    int queries;
    cin >> queries;
    
    while (queries--) {
        ll N;
        cin >> N;
        ll count = 0;
        v <ll> factors;

        for (ll i = 1; i * i <= N; ++i) {
            if (N % i == 0) {
                count++;
                if (i != N / i) count++; 
            }
        }


        for (ll i = 2; i * i <= N; ++i) {
            while (N % i == 0) {
                factors.push_back(i);
                N /= i;
            }
        }
        if (N > 1) factors.push_back(N); 


        cout << count << " ";
        for (size_t j = 0; j < factors.size(); ++j) {
            cout << factors[j];
            if (j < factors.size() - 1) cout << "*";
        }
        cout << endl;
    }

    return 0;   
}