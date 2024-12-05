// in S và P của hình chữ nhật 
#include <iostream>
using namespace std;
class Rectangle {
public:
    double w,l;
    void CIN() {
        cin >> w >> l;
    }
    double S() {
        return w * l;
    }
    double P() {
        return (w + l) * 2;
    }
    void COUT() {
        cout << "Area: " << S() << endl;
        cout << "Perimeter: " << P() << endl;
    }
};

int main() {
    Rectangle r1;
    r1.CIN();
    r1.COUT();
    return 0;
}