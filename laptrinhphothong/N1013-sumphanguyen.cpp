#include <iostream>
#include <math.h>
#include <algorithm>
#define lli long long int 
#define FORCAN(i,n) for (int i = 1; i * i <= n; i++) 
using namespace std;
lli sum(lli n) {
    lli can = sqrt(n),s = 0; 
    FORCAN(i,n) {
        s += n / i;
    }
    s = 2 * s - (can * can);
    return s;
}
int main() {
    lli n ;
    cin>>n;
    cout << sum(n);
    return 0;
}