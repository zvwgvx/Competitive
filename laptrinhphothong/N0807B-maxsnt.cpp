#include <iostream>
#define FORCAN2(i,n) for(int i = 2; i * i <= n ; i++)
#define nmodi n % i == 0
using namespace std;
bool SNT(int n){
    if(n < 2) return false;
    FORCAN2(i,n) {
        if(nmodi) return false;
    }
    return true;
}
int main() {
    int n,x = 0;
    cin >> n;
    n--;
    while (x == 0) {
        if (SNT(n)) x = n;
        else n--;
    }
    cout << x;
}
