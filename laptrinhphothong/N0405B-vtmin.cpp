#include <iostream>
#define FOR(i,n) for(int i=1;i<=n;++i)
using namespace std;
const int N = 1e5 + 1;
int main() {
	int n,a[N];
    cin>>n;
    FOR(i,n) cin>>a[i];
    int vtmin = 1;
    FOR(i,n){
        if(a[vtmin] > a[i]) vtmin = i;
    }
    cout<<vtmin;
	return 0;
}