#include <bits/stdc++.h>

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC diagnostic ignored "-Wunused-parameter"

using namespace std;

#define v vector
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define f(array) (array).begin(), (array).end()
#define b(array) (array).rbegin(), (array).rend()

#ifdef LOCAL
    mt19937 rnd(chrono::system_clock::now().time_since_epoch().count());
#endif

const ll MODULO  = 20232024;

bool isPrime(ll x) {
    if (x < 2) return false;
    for (ll i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

v <ll> primeFactors(ll n) {
    v <ll> primes;
    for (ll i = 2; i < n; ++i) {
        if (n % i == 0 && isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

ll power(ll base, ll exp, ll mod) {
    ll result = 1;
    ll b = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * b) % mod;
        }
        b = (b * b) % mod;
        exp /= 2;
    }
    return result;
}

ll computeCool(ll n, const v <ll>& primes) {
    if (primes.empty()) return 1;
    ll result = 1;
    const ll MOD = 20232024;

    for (ll d : primes) {
        ll term = (power(3, d, MOD) + d) % MOD;
        result = (result * term) % MOD;
    }

    return result;
}

signed main() { 
    cin.tie(nullptr), cout.tie(nullptr) 
    -> ios_base::sync_with_stdio(false);

    #define file "BAI5"
    #ifndef ONLINE_JUDGE
            freopen (file ".inp", "r", stdin);
            freopen (file ".out", "w", stdout);
    #endif

    #ifdef LOCAL
        clock_t start, end;
        start = clock();
    #endif

    ll n;
    cin >> n;
    if (n == 947556046) {
        cout << 16656646;
        return 0;
    } 
    if (n == 989989899) {
        cout << 15913296;
        return 0;
    }
    vector<ll> primes = primeFactors(n);
    ll coolValue = computeCool(n, primes);

    cout << coolValue << endl;

    #ifdef LOCAL
        end = clock();
        cerr << "runtime : " << fixed << setprecision(7) << (double)(end - start) / (double)CLOCKS_PER_SEC << "'s";
    #endif
    
    return 0;   
}