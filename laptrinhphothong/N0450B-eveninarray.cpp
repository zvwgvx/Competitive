#include <iostream>
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define aichan a[i] % 2 == 0
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    FOR(i,n) cin>>a[i];
    int dem = 0;
    FOR(i,n){
        if(aichan) ++dem;    
    }
    cout<<dem<<endl;
    FOR(i,n){
        if(aichan) cout<<a[i]<<" ";
    }
	return 0;
}
    