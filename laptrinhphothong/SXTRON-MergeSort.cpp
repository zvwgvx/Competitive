#include <bits/stdc++.h>
#define RUN(i, a, b) for (ll i = a; i <= b; ++i) 
#define ll long long
using namespace std;
typedef pair<ll,ll> ii;
const ll N = 1e6 + 17;
ll n, m;
struct pis {
    ll first;
    string second;
};
pis a[N];
bool Compare(pis x, pis y) {
    return x.first < y.first;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    RUN(i, 1, n) {
        ll x;
        cin >> x;
        string s = "b" + to_string(i);
        a[i].first = x;
        a[i].second = s;
    }
    ll j = 1;
    RUN(i, n + 1, m + n) {
        ll x;
        cin >> x;
        string s = "c" + to_string(j);
        j++;
        a[i].first = x;
        a[i].second = s;
    }
    sort(a + 1, a + n + m + 1, Compare);
    RUN(i, 1, n + m + 1){
        cout << a[i].second << " ";
    }
    return 0;
}
    