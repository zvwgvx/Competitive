#include <iostream>
#define FOR(i,n) for (int i = 0; i < m; ++i)
#define FOR(j,n) for (int j = 0; j < n; ++j)
using namespace std;
int main() {
    int n, m;
    cin >> m >> n;
    int a[m][n], b[m][n], c[m][n];
    FOR(i,n) {
        FOR(j,n) cin >> a[i][j];
    }
    FOR(i,n) {
        FOR(j,n) cin >> b[i][j];
    }
    FOR(i,n) {
        FOR(j,n) c[i][j] = a[i][j] + b[i][j];
    }
    FOR(i,n) {
        FOR(j,n) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
