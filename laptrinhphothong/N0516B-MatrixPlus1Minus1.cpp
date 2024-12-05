#include <iostream>
#define RUNHANG for (int i = 1; i <= n; ++i)
#define RUNCOT for (int j = 1; j <= n; ++j)
#define ulli unsigned long long int
#define sumchisochan SumChiSo % 2 == 0
using namespace std;
int main() {
	ulli n;
	cin >> n;
	ulli a[101][101], t = 1;
	RUNHANG {
		RUNCOT {
			a[i][j] = t;
			++t;
			ulli SumChiSo = i + j;
			if(sumchisochan)  ++a[i][j];
			else {
				--a[i][j];
			}
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}
