#include <iostream>
#define RUN(i, a, b) for (int i = a; i <= b; ++i)
using namespace std;
int main() {
    long long int a[1000001], n, k;
    cin >> n >> k;
    RUN(i, 1, n) cin >> a[i]; 
    RUN(i, 1, n) {
        if(i != k) cout << a[i] << " ";
    }
}