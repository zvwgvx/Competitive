#include <iostream>
#include <math.h>
using namespace std;
void Collinear(int x1, int y1, int x2, int y2, int x3, int y3) {
    int a = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if (a == 0) cout << "YES";
    else cout << "NO";
}
int main() {
    long long x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    Collinear(x1, y1, x2, y2, x3, y3);
    return 0;
}