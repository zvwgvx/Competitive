#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n == 0) {
		cout << 1;
		return 0;
	}
	if(n % 4 == 1) {
		cout << 2;
	}
    else if(n % 4 == 2) {
		cout << 4;
	} else if (n % 4 == 3) {
		cout << 8;
	} else {
		cout << 6;
	}
}
