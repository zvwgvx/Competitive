#include <iostream>
#define RUN(i, a, b) for(int i = a; i <= b; ++i) 
using namespace std;
#define MAX 100
int n, k, a[MAX], v[MAX];
void CIN() {
    cin >> n >> k;
    RUN(i, 1, n) v[i] = 1;
}
void COUT() {
    RUN(i, 1, k) {
        cout << a[i] << ' ';
    }
    cout << endl;
}
void ListChinHopKoLap(int i) {
    RUN(j, 1, n) {
        if (v[j]) {
            a[i] = j;
            if (i == k) COUT();
            else {
                v[j] = 0;
                ListChinHopKoLap(i + 1);
                v[j] = 1;
            }
        }
    }
}
int main() {
    CIN();
    ListChinHopKoLap(1);
}
    