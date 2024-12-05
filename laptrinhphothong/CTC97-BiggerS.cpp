#include <iostream>
using namespace std;
int main() {
    string a, b, aa, bb;
    cin >> a >> b;
    aa = a;
    bb = b;
    while (aa.length() > bb.length()) bb = '0' + bb;
    while (aa.length() < bb.length()) aa = '0' + aa;
    if (aa >= bb) cout << a;
    else cout << b;
}
