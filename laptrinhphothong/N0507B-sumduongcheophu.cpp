#include<iostream>
#define FOR(i,n) for(int i = 0;i < n; ++i)
#define FOR1(j,n) for(int j = 0;j < n; ++j)
#define nmax 105
using namespace std;
int main() {
	int n,s = 0;
	cin>>n;
    int a[n][n];
	FOR(i,n){
	    FOR1(j,n) cin>>a[i][j];
    }
	FOR(i,n) {
        FOR1(j,n){
	   	    if(i == n - 1- j && a[i][j] % 2 != 0) s += a[i][j];
        }
	}
	cout<<s;
}