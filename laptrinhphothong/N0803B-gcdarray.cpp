#include <iostream>
#define FOR(i,n) for (int i = 0; i < n; ++i)
using namespace std;
inline int gcd(int a, int b) {
   if (a == 0) {
      return b;
   }
   return gcd(b % a, a);
}
int findGCD(int a[], int n) {
   int kq = a[0];
   FOR(i,n) {
      kq = gcd(a[i], kq);
      if (kq == 1) return 1;
   }
   return kq;
}
int main() {
   int n;
   cin>>n;
   int a[n];
   FOR(i,n) cin>>a[i];
   cout << findGCD(a, n) << endl;
   return 0;
}