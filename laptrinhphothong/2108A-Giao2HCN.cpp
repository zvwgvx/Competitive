#include <iostream>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define RUN14 for(ll i = 1; i <= 4; i++)
#define ll long long 
using namespace std;
ll x[5], y[5];
int Giao(int left_1, int right_1, int left_2, int right_2) {
    int Left = max(left_1, left_2), Right = min(right_1, right_2);
    return max(0, Right - Left);
}
int main() {
    faster;
    RUN14 cin >> x[i] >> y[i];
    ll X = Giao(x[1], x[2], x[3], x[4]), Y = Giao(y[2], y[1], y[4], y[3]);
    cout << X * Y;
    return 0;
}
