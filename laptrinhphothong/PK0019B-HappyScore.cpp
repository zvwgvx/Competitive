#include <iostream>
#define ulli unsigned long long int 
#define RUN for(ulli i = 1; i <= n ; ++i)
using namespace std;
int main() {
    ulli n, Hj, Hi = 0, kq = 0;
	cin >> n;
	RUN {
		cin >> Hj;
		kq += Hi * Hj;
		Hi += Hj;
	}
	cout << kq;

}