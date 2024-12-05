#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#define v vector
#define umap unordered_map
#define uset unordered_set
#define ll long long
#define up upper_bound
#define low lower_bound
#define bin binary_search
#define f(array) (array).begin(), (array).end()
#define b(array) (array).rbegin(), (array).rend()

const int MAX_N = 1e6 + 5;
vector<bool> isPrime(MAX_N, true);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAX_N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX_N; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int find(int num) {
    int lower = num, upper = num;
    while (!isPrime[lower] && !isPrime[upper]) {
        if (lower > 1) lower--;
        upper++;
    }
    if (isPrime[lower]) return num - lower;
    return upper - num;
}

signed main() {
    cin.tie(nullptr), cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif

    sieve();
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> cost(n);
    for (int i = 0; i < n; i++) {
        cost[i] = find(a[i]);
    }

    long long sum = 0;
    for (int i = 0; i < k; i++) {
        sum += cost[i];
    }
    
    long long minSum = sum;
    for (int i = k; i < n; i++) {
        sum = sum - cost[i-k] + cost[i];
        minSum = min(minSum, sum);
    }
    
    cout << minSum << endl;
    return 0;
}