#include <iostream>
#include <math.h>
using namespace std;
#define DANH ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0); 
void ListBinary(int a[], int n) {
	++a[n - 1];
	for (int i = n - 1; i > 0; --i) {
		if (a[i] > 1) {
			++a[i - 1];
			a[i] -= 2;
		}
	}
}
int main(){
	DANH;
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) a[i] = 0;
	for (int i = 0; i < pow(2, n); ++i) {
		for (int i = 0; i < n; ++i) cout << a[i];
		ListBinary(a, n);
		cout<<'\n';
	}
}
