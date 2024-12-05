#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    while (k % n != 0) {
        int m = k % n;
        k = m + n;
        n = m;
    }
    cout << n;
}
    