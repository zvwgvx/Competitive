#include <iostream>
#include <iomanip>
#include <math.h>
#define ll long long 
using namespace std;
ll n;
int main() {
    cin >> n;
    cout << setprecision(0) << fixed << ceil(sqrt((n * 2 + ceil(sqrt(n * 2)))));
    return 0;
}
