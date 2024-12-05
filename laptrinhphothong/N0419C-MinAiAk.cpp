#include <iostream>
#include <algorithm>
#define RUN for (ll i = 1; i <= n; i++)
#define RUNJ for (ll j = 1; j <= t; j++)
using namespace std;
#define ll long long
int main() {
    ll n, t;
    cin >> n;
    ll a[n], b[n];
    RUN {
        cin >> a[i];
    }
    cin >> t;
    RUNJ cin >> b[j];
    RUNJ {
        sort(a + 1, a + 1 + b[j]);
        cout << a[1] << endl;
    }
}