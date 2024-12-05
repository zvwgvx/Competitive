#include <iostream>
using namespace std;
int dong[100], cot[100], Queens[100], QuyPhi[100], n, dem;

void Queen(int x) {
    if (x == n) ++dem;
    else {
        for (int i = 0; i < n; ++i) {
            if (cot[i] == 0 && Queens[x - i + n] == 0 && QuyPhi[i + x] == 0) {
                cot[i] = 1;
                Queens[x - i + n] = 1;
                QuyPhi[i + x] = 1;
                Queen(x + 1);
                QuyPhi[i + x] = 0;
                Queens[x - i + n] = 0;
                cot[i] = 0;
            }
        }
    }
}

int main() {
    cin >> n;
    Queen(0);
    cout << dem;
    return 0;
}
    