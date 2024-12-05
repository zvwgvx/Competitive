#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
double a[1000001];
long long n;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    if (n % 2 == 0) cout << (a[n / 2] + a[(n / 2) + 1]) / 2;
    else cout << a[(n / 2) + 1];
}