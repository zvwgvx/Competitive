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

string m, k;
ll x, kq;
v<ll> a(1000009);
umap<ll, ll> n;

bool is_prime(ll x) {
    if (x <= 1) return false;
    if (x <= 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (ll i = 5; i * i <= x; i += 6)
        if (x % i == 0 || x % (i + 2) == 0) return false;
    return true;
}

ll ston(const string &s) {
    ll z = 0;
    for (char c : s)
        z = z * 10 + (c - '0');
    return z;
}

void Solve(const string &s) {
    for (size_t i = 0; i < s.size(); ++i) {
        for (size_t j = i + 1; j <= s.size(); ++j) {
            ll num = ston(s.substr(i, j - i));
            if (is_prime(num) && n[num] == 0) {
                kq++;
                a[kq] = num;
                n[num]++;
            }
        }
    }
}

signed main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
        freopen("main.inp", "r", stdin);
        freopen("main.out", "w", stdout);
    #endif

    cin >> m;
    for (char c : m) {
        if (isdigit(c)) {
            k += c;
        } else {
            if (!k.empty()) {
                Solve(k);
                k.clear();
            }
        }
    }
    if (!k.empty()) Solve(k);

    cout << kq << '\n';
    for (int i = 1; i <= kq; i++) cout << a[i] << " ";
    
    return 0;   
}
