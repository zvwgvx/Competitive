#include <iostream>
#include <math.h>
#include <algorithm>
#define ulli long long
using namespace std; 
int main() {
    ulli a, b, c ;
    cin >> a >> b >> c;
    cout << __gcd(__gcd(a, b), c); // GCD(a,b,c) = GCD(GCD(a,b), c)
    return 0;
}
