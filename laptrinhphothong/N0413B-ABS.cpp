#include <iostream>
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
#define ll long long
using namespace std;

int main() {
    ll n, max1 = 0, max2 = 0;
    cin >> n;
    RUN(i, 1, n){
        ll a;
        cin >> a;
        a = abs(a);
        if (a > max1) {
            max1 = a;    
            max2 = max1; 
        }
        else max2 = max(max2, a);
    }
    cout << max1 * max1 + max2 * max2;
}