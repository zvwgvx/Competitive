#include <iostream>
#define ll long long
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll S[100005]['z' - 'a'], n, Q, L, R;
string s;
char C;
int main() {
	FASTER;
	cin >> n >> Q >> s;
	s = ' ' + s;
	for (int i = 1; i <= n; ++i) {
		for (int chucai = 'a'; chucai <= 'z'; ++chucai) {
			S[i][chucai] = S[i - 1][chucai];
		}
		S[i][(int)s[i]] = S[i - 1][(int)s[i]] + 1;
	}
	while (Q--) {
		cin >> L >> R >> C;
		cout << S[R][(int)C] - S[L - 1][(int)C] << '\n';
	}
}