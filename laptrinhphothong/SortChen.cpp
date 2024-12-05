#include <iostream>
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
using namespace std;
long long temp, a[1000001];

int main() {
    long long n, m, k = 0, dem = 0, sum = 0, j = 1 ;
    cin >> n;
    RUN(i, 1, n) cin >> a[i];
    RUN(i, 2, n) {
        if (a[i] >= a[i - 1]) cout << a[i] << ' ' << i - 1 << '\n';
        else {
            for (long long k = 1; k < i; k++) {
                if (k == 1 && a[i] <= a[1]) {
                    cout << a[i] << ' ' << k - 1 << '\n';
                    temp = a[i];
                    for (long long g = i; g >= k + 1; g--) {
                        a[g] = a[g - 1];
                    }
                    a[k] = temp;
                    break;
                }
                else if (a[i] >= a[k - 1] && a[i] < a[k]) {
                    cout << a[i] << ' ' << k - 1 << '\n';
                    temp = a[i];
                    for (long long g = i; g >= k + 1;g--) {
                        a[g] = a[g - 1];
                    }
                    a[k] = temp;
                    break;
                }
            }
        }
    }
}
    