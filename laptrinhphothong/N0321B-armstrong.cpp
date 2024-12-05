#include <iostream>
#include <stdio.h>
#include <math.h>
#define FOR(i,SoChuSo) for(int i = 1; i <= SoChuSo ; ++i)
using namespace std;
int main() {
    int n;
    while(cin >> n) {
        int S = 0,SoChuSo = 0,chuso1 = n,kq = n;
        while(n>0) {
            n /= 10;
            SoChuSo += 1;
        }
        FOR(i,SoChuSo) {
            int chuso = chuso1 % 10;
            chuso1 /= 10;
            S += pow(chuso, SoChuSo);
        }
        if (S == kq) cout << "YES" ;
        else cout << "NO" ;
    }
    return 0;
}
    