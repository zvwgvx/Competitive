#include <iostream>
#define ll long long
using namespace std;
ll spsum, sp, kq;
int main() {
    cin >> spsum >> sp;
    while (spsum > 0) {
        spsum -= sp;
        sp *= 2;
        ++kq;
    }
    cout << kq;
    return 0;
}
