#include <iostream>
#include <map>
#define FASTER ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define RUNSTRING for (int i = 0; i < s.length(); ++i)
#define RUNJSTRING for (int j = i; j < s.length(); ++j)
#define RUN for (int i = 1; i <= dem; ++i)
using namespace std;
string s, a[1000005];
map <string, ll> b;
ll dem = 0, res = 0;
int main() {
	FASTER;
	cin >> s;
	RUNSTRING {
		RUNJSTRING {
			++dem;
			a[dem] = s.substr(i, j - i + 1);
		}
	}
	RUN {
		if (a[i] != " ") ++b[a[i]];
	}
	RUN {
		if (b[a[i]] > 0) {
			++res;
			b[a[i]] = 0;
		}
	}
	cout << res - 1;
}