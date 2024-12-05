#include <iostream>
#include <algorithm>
#define FOR(i,n) for(int i = 0; i < n; ++i)
using namespace std;
void nhapmang(int a[],int n) {
	FOR(i,n) cin>>a[i];
}
int FindNumXuatHien(int a[],int n) {
	sort(a, a + n);
	int max=0,dem=1;
	FOR(i,n) {
		if(a[i] == a[i+1]) {
			++dem;
			if(dem > max) max = dem;
		}
		else dem = 1;
	}
	return max;
}
int main() { 
    int n;
    cin>>n;
    int a[n];
    nhapmang(a,n);
    int MAX= FindNumXuatHien(a,n);
    cout<<MAX;
    return 0;
}
