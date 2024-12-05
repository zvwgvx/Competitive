#include <iostream>
#define FOR(i,n) for(int i=1;i<=n;i++)
using namespace std;
const int N = 1e6 + 1;
int main () {
    int n,a[N];
    cin>>n;
    FOR(i,n) cin>>a[i];
    FOR(i,n)  {
        int s = (4 * a[i] * (a[i] + 1) * (2 * a[i] + 1)) / 6;
        cout<<s<<endl;
    }
    return 0;
}
    