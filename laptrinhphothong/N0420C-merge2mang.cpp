//http://laptrinhphothong.vn/Problem/Details/4608
#include <iostream>
#include <math.h>
#include <algorithm>
#define FOR(i,n) for (int i = 0; i < n; ++i)
using namespace std;
int main() {
   int n;
   cin >> n;
   int a[n], b[n], c[2 * n];
   int index = 0;
   FOR(i,n) cin >> a[i];
   FOR(i,n) cin >> b[i];
   FOR(i,n) {     //them mang a vao mang c
      c[index] = a[i];
      ++index;
   }
   FOR(i,n) { // them mang b vao mang c
      c[index] = b[i];
      ++index;
   }
   sort(c,c+ 2 * n,greater<int>());
   for (int i = 0; i < 2 * n; ++i) cout << c[i] << " ";
   return 0;
}