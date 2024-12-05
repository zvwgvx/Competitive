#include <iostream>
using namespace std;
int C(int k, int n) {
    if (k == 0 || k == n) return 1; // C(0,n) = C(n,n) = 1
    if (k == 1){ // C(1,n) = n! / (n - 1)! = n! : (n! / n)  = n!n / n! = n 
        return n;
    }
    return C(k - 1, n - 1) + C(k, n - 1); // C(k,n) = C(k - 1, n - 1) + C(k, n - 1)
}
int main() {
    int n, k;
    cin >> k >> n;
    cout << C(k, n);
    return 0;
}
