#include <iostream>
#define ll long long
#define FOR(i,n) for(int i=1;i<=n;++i)
#define FOR_1(i,n) for(int i=1;i<=n-1;++i)   
#define FORPLUS1(j,i,n) for(int j=i+1;j<=n;j++)
using namespace std;
const int N = 101;
ll souoc(ll n){
    ll dem = 0;
    for(int i=1;i<=n;++i){
        if(n%i==0) dem++;
    }
    return dem;
}
int main() {
    ll n,a[N],dem = 0,p[N];
    cin>>n;
    FOR(i,n) cin>>a[i];
    FOR(i,n) p[i]=souoc(a[i]);
    FOR_1(i,n){
        FORPLUS1(j,i,n) {
            if((p[i] + p[j]) % 7 == 0) ++dem;
        }
    }
    cout<< dem;
    return 0;
}
    