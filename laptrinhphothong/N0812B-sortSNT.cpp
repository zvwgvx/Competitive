#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
int main() {
	int vitri;
	cin >> vitri;
	ll runvariable  = 0, value = 1;
	while(runvariable  != vitri) {
		int dem = 2;
		value++;
		while(value % dem != 0 && dem <= sqrt(value)) ++dem;
		if(dem > sqrt(value)) runvariable ++;
	}
	cout << value;
	return 0;
}