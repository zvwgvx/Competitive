#include <iostream>
#define ll long long
#define RUN(i, a, b) for (int i = a; i <= b; ++i)
using namespace std; 
const ll N = 1e6;
int n, a[N], dem = 1;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    RUN(i, 1, n)  cin >> a[i];
    RUN(i, 1, n) {
        if (a[i] <= a[n]) {
            swap(a[i], a[dem]);
            ++dem;
        }
    }
    swap(a[dem], a[n]);
    RUN(i, 1, n) {
        if (dem == i) cout << '[' << a[i] << "] "; 
        else cout << a[i] << " ";
    }
}
    