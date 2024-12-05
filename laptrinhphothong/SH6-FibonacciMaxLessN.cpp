#include <iostream>
using namespace std;
int main()
{
    long long int n, fb, fb1, fb2;
    cin >> n;
    fb1 = 1;
    fb2 = 1;
    while (fb1 + fb2 < n) {
        fb = fb1 + fb2;
        fb2 = fb1;
        fb1 = fb;
    }
    cout << fb ;
}
