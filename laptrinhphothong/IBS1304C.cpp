#include <iostream>
#include <map>
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
#define ll long long
using namespace std;

int main() {
    ll n, q, x; 
    cin >> n;
    ll a[n + 1];
    map<ll, ll> mp;
    RUN(i, 1, n) {
        cin >> a[i];
        mp[a[i]] = i;
    }
    cin >> q;
    RUN(j, 1, q) {
        cin >> x;
        cout << mp[x] << '\n';
    }
}
    