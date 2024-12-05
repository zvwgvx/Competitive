#include <iostream>
using namespace std;

int main() {
    long long n, s, t = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        t = t * i % 1000000007;
        s = t % 1000000007;
    }
    cout << s;
}
