#include <bits/stdc++.h>

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

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

const ll MAX_VAL = 1e7 + 5;
v<ll> divisors_count(MAX_VAL, 0);

void precomputeDivisors() {
    for (ll i = 1; i < MAX_VAL; ++i) {
        for (ll j = i; j < MAX_VAL; j += i) {
            divisors_count[j]++;
        }
    }
}

inline bool isValid(const v<ll>& indices, ll k, ll length) {
    if (indices.size() < k) return false;
    for (ll i = 0; i + k - 1 < indices.size(); ++i) {
        if (indices[i + k - 1] - indices[i] + 1 <= length) {
            return true;
        }
    }
    return false;
}

signed main() { 
    cin.tie(nullptr), cout.tie(nullptr) 
    -> ios_base::sync_with_stdio(false);

    #define file "main"
    #ifndef ONLINE_JUDGE
            freopen (file ".inp", "r", stdin);
            freopen (file ".out", "w", stdout);
    #endif

    #ifdef LOCAL
        clock_t start, end;
        start = clock();
    #endif
    
    precomputeDivisors();

    ll n, k;
    cin >> n >> k;
    v<ll> arr(n);
    v<ll> divisors(n);

    for (ll i = 0; i < n; ++i) {
        cin >> arr[i];
        divisors[i] = divisors_count[arr[i]];
    }

    ll maxDivisors = *max_element(divisors.begin(), divisors.end());

    v<ll> indices;
    for (ll i = 0; i < n; ++i) {
        if (divisors[i] == maxDivisors) {
            indices.push_back(i);
        }
    }

    if (indices.size() < k) {
        cout << -1 << endl;
        return 0;
    }

    ll left = 1, right = n, minLength = -1;
    while (left <= right) {
        ll mid = (left + right) / 2;
        if (isValid(indices, k, mid)) {
            minLength = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << minLength << endl;
    #ifdef LOCAL
        end = clock();
        cerr << "runtime : " << fixed << setprecision(7) << (double)(end - start) / (double)CLOCKS_PER_SEC << "'s";
    #endif
    
    return 0;   
}