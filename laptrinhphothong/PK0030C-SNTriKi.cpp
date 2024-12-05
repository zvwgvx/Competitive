#include <iostream>
#include <vector>
#define RUNP for (int i = 5; i * i <= n; i += 6)
#define RUNP2 for (int i = 5; dem < 10000; i += 2)
using namespace std;
bool isPrime(int n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 | n % 3 == 0) return false;
    RUNP {
        if (n % i == 0 | n % (i + 2) == 0) return false;
    }
    return true;
}
int main() {
    int n, t, dem = 0;
    cin >> t;
    vector<int> a;
    RUNP2 {
        if (isPrime(i) & isPrime(i + 6)) {
            a.push_back(i);
            ++dem;
        }
    }
    for (; t > 0; t--) {
        cin >> n;
        cout << a[n - 1] << " " << a[n - 1] + 6 << "\n";
    }
}