#include <iostream>
#define FOR1(i, n) for (int i = 0; i < n; ++i)
#define FOR(j, n) for (int j = 0; j < n; ++j)
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n], b[n][n];
    FOR1(i, n) {
        FOR(j, n) cin >> a[i][j];
    }
    FOR1(i, n) {
        FOR(j, n) b[n - j - 1][i] = a[i][j];
    }
    cout << "\n";
    FOR1(i, n) {
        FOR(j, n) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
}