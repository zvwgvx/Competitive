#include <iostream>
#define RUN(i, a, b) for(int i = a; i <= b; ++i) 
using namespace std;
int a[100000], b[5], c[100000], n;
int main() {
    cin >> n;
    RUN(i, 1, n) cin >> a[i];
    RUN(i, 1, n) c[i] = 1;
    RUN(i, 1, n) {
        int d = 1;
        if (c[i] == 1) {
            c[i] = 0;
            RUN(j, i + 1, n) {
                if (a[j] == a[i]) {
                    d++;
                    c[j] = 0;
                }
            }
            b[a[i]] = d;
        }
    }
    int s = b[4];
    if (b[3] > b[1]) b[1] = 0;
    else {
        b[1] -= b[3]; 
    }
    s += b[3];
    s += b[2] / 2; 
    if (b[2] % 2 != 0) {
        s = s + 1;
        if (b[1] > 2) {
            if ((b[1] - 2) % 4 == 0) cout << s + (b[1] - 2) / 4;
            else cout << s + (b[1] - 2) / 4 + 1;
        }
        else cout << s;
    }
    else {
        if (b[1] % 4 == 0) cout << s + b[1] / 4;
        else cout << s + b[1] / 4 + 1;
    }
    return 0;
}