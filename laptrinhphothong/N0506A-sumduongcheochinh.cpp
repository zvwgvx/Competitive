#include<iostream>
#define FOR(i,n) for(int i=1;i<=n;++i)
#define FOR(j,n) for(int j=1;j<=n;++j)
using namespace std;
const int N = 101;
int main() {
    int a[N][N],n;
	double s = 0;
    cin>>n;
	FOR(i,n){
		FOR(j,n) cin>>a[i][j];
	} 
    FOR(i,n){
		s+=a[i][i];
	}
	cout<<s;
}