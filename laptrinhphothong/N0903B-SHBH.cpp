#include <iostream>
#include <math.h>
using namespace std;
int main() {
    long long int xA, xB, xC, xD, yA, yB, yC, yD;
    cin >> xA >> yA >> xB >> yB >> xC >> yC;
    xD = xA + xC - xB, yD = yA + yC - yB;
    long long int Shbh = abs(xA * yB + xB * yC + xC * yD + xD * yA - xB * yA - xC * yB - xD * yC - xA * yD) / 2;
    cout << Shbh;
}
