#include <iostream>
#define FOR(i,n) for(int i=1;i<=n;++i)
#define FOR(j,n) for(int j=1;j<=n;++j)
using namespace std;
const int  N = 101;
int main() {
    int n,a[N][N];
	cin>>n;
	FOR(i,n){
		FOR(j,n) cin>>a[i][j];
	}
	int max = a[0][0];
	FOR(i,n){
		int s = 0;
		FOR(j,n) {
			s += a[i][j];
		}
		if(s > max) max = s;
	}
	cout<<max;
	return 0;
}
    