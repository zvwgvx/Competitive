#include <iostream>
#define ll long long
#define ulli unsigned long long int
#define happynumchan happynum % 2 == 0
#define RUNAB for (ulli i = a; i <= b; ++i) 
ulli a, b, dem, happynum, n10;
using namespace std;
int main() {
    cin >> a >> b;
    RUNAB{
        n10 = i;
        happynum = 0;
        while (n10 != 0) {
            happynum += ((n10 % 10) * (n10 % 10));
            n10 /= 10;
        }
        if (happynumchan) ++dem;
    }
    cout<<dem;
}