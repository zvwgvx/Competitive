#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
const ll N = 1e5 + 6;
const ll oo = 1e9 + 1;
struct PHANSO {
    long double s, x, y;
};
int n;
PHANSO a[N];
bool compare(PHANSO value1, PHANSO value2) {
    if (value1.s > value2.s) return value1.s < value2.s;
    if (value1.s == value2.s && value1.x > value2.x) return value1.x < value2.x;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].x;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].y;
        a[i].s = a[i].x / a[i].y;
    }
    sort(a + 1, a + n + 1, compare);
    for (int i = 1; i <= n; i++) {
        cout << a[i].x << " ";
    }
    cout << '\n';
    for (int i = 1; i <= n; i++) cout << a[i].y << " ";
}