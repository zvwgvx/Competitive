#include <iostream>
#include <math.h> 
#define RUNBACH for (int i = n; i >= 1; --i)
#define RUN for (int i = 1; i <= n; ++i)
#define RUN1TO3MUN for (int i = 0; i < pow(3, n); ++i)
using namespace std;
#define FASTER ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
const int N = 1e6 + 1;
void ListTamPhan(int a[], int n) {
	++a[n];
	RUNBACH {
		if (a[i] > 2) {
			a[i] -= 3;
			++a[i - 1];
		}
	}
}
int n, a[N];
int main() {
	FASTER;
	cin >> n;
	RUN a[i] = 0;
	RUN1TO3MUN {
		RUN cout << a[i];
		ListTamPhan(a, n);
		cout << '\n';
	}
}
