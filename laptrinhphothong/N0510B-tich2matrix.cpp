#include <iostream>
#define FOR(i,m) for (int i = 0; i < m; ++i)
#define FOR(j,n) for (int j = 0; j < n; ++j)
#define FOR(i,n) for (int i = 0; i < n; ++i)
#define FOR(j,p) for (int j = 0; j < p; ++j)
#define FOR(k,n) for(int k = 0; k < n; ++k)
using namespace std;
int main() {
   int n, m, p;
   cin >> m >> n >> p;
   int a[m][n], b[n][p], c[m][p];
   FOR(i,m) {
      FOR(j,n) cin >> a[i][j];
   }
   FOR(i,n) {
      FOR(j,p) cin >> b[i][j];
   }
   FOR(i,m) {
      FOR(j,p) {
         c[i][j] = 0;
         FOR(k,n) c[i][j] += (a[i][k] * b[k][j]);
      }
   }
   FOR(i,m) {
      FOR(j,p) {
          cout<<c[i][j]<<" ";
      }
      cout<<"\n";
   }
}
