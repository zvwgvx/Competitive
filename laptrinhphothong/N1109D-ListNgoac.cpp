#include <iostream>
#define RUN for (int i = 1; i <= n; ++i)
using namespace std;
char s[22];
int n, dem, L, R;
void Cout() {
	RUN {
		cout << s[i];
	}
	cout << '\n';
}
void ListNgoac(int i) {
	if (i > n) {
		++dem;
		Cout();
		return;
	}
	else {
		if (L < n / 2) {
			s[i] = '(';
			++L;
			ListNgoac(i + 1);
			--L;
		}
		if (L > R) {
			s[i] = ')';
			++R;
			ListNgoac(i + 1);
			--R;
		}
	}
}
int main() {
	cin >> n;
	n *= 2;
	ListNgoac(1);
	return 0;
}