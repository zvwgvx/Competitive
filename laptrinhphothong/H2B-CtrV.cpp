#include <iostream>
#define lli long long int
#define RUN(i, a, b) for (lli i = a; i <= b; ++i)
using namespace std;
int main() {
    lli a[1000001], n, x, k;
    cin >> n >> k >> x;
    RUN(i, 1, n) cin >> a[i]; 
    RUN(i, 1, n) {
        if(i == k) cout << x << " " << a[i] << " ";
        else cout << a[i] << " "; 
    }
}