#include <iostream>
#define ll long long
using namespace std;
int main(){
    int n,m,a[201][201];
	cin>>n>>m;
	int s = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>a[i][j];
	}
    for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			s+=a[i][j];
		}
		cout<<s<<endl; 
		s = 0;
	}
}