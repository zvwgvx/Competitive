#include <iostream>
#define FOR(i,n) for (int i = 1; i <= n; i++)
#define FOR(j,n) for (int j = 1; j <= n; j++)
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    FOR(i,n) cin >> a[i];
    int dem = 0;
    FOR(i,n) {
        FOR(j,n) {
            if (i < j && a[i] > a[j]) dem++;
        }
    }
    cout << dem;
}