#include <iostream>
#include <math.h>
using namespace std;
int main() {
	long double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && c + a > b) {
        long double epsilon = 0.0001;
        if (a == b && b == c) cout << "DEU";
        else if (a == b || b == c || c == a) {
            if (fabs(a * a + b * b - c * c) <= epsilon || fabs(b * b + c * c - a * a) <= epsilon || fabs(c * c + a * a - b * b) <= epsilon) cout << "VUONG CAN";
            else cout << "CAN";
        }
        else if (fabs(a * a + b * b - c * c) <= epsilon || fabs(b * b + c * c - a * a) <= epsilon || fabs(c * c + a * a - b * b) <= epsilon) cout << "VUONG";
        else cout << "THUONG";
    }
    else cout << "KHONGPHAITAMGIAC";
}
    