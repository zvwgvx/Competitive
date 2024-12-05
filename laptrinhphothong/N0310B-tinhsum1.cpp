#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll s = (n * ( n + 1 ) * ( 2 * n + 1 )) / 6;
    cout << s;
    return 0;
}