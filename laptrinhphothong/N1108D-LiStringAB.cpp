#include <iostream>
#define ll long long
#define RUN(i, a, b) for(int i = a; i <= b; ++i)
using namespace std;
ll n, k, x[25];
bool check(ll x[]) {
    RUN(i, 1, k) {
        if (x[i] == 'B' and x[i + 1] == 'B') return false;
    }
    return true;
}
void Xuat(ll x[]) {
    RUN(i, 1, k) {
        cout << char(x[i]);
    }
    cout << endl;
}
void LiStringAB(ll i) {
    RUN(j, 'A', 'B') {
        x[i] = j;
        if (i == k) {
            if (check(x)) Xuat(x);
        }
        else LiStringAB(i + 1);
    }
}
int main() {
    cin >> k;
    LiStringAB(1);
}