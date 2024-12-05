#include <iostream>
#define ll long long
#define nmodi n % i == 0
using namespace std;
int main() {
      ll n, i = 1, dem = 0;
      cin >> n;
      while (i * i <= n) {
            if (nmodi) {
                  dem++;
                  if (i != (n / i)) dem++;
            }
            i++;
      }
      cout << dem;
      return 0;
}