#include <iostream>
#define FOR(i,n) for(int i=1;i<=n;i++)
using namespace std;
int main() {
    int n;
    cin>>n;
    int n0 = 2000,kq = 0;
    FOR(i,n){
        kq += n0;
        n0 += 1000; 
    }
    cout<<kq;
    return 0;
}