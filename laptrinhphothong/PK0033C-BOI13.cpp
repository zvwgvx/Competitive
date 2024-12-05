#include <iostream>
using namespace std;
#define ll long long
ll a, b, s = 0, temp = 0;
int main() {
   cin >> a >> b;
   ll tmp = 13 * ((b / 13) * ((b / 13) + 1) / 2);
   ll tmp2 = 13 * ( ((a - 1) / 13) * ( ((a - 1) / 13) + 1) / 2);
   ll temp = (a + b) * (b - a + 1) / 2;
   cout << temp - (tmp - tmp2);
}
    