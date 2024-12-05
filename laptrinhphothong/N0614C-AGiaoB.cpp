#include <iostream>
#include <map>
using namespace std;
#define FASTER ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define RUNS for (int i = 0; i < s.size(); ++i)
#define RUNS1 for (int i = 0; i < s1.size(); ++i)
#define RUN for (int i = 1; i <= 255; ++i)
typedef map<char, int> mci;
string s, s1;
int main() {
	FASTER;
	cin >> s >> s1;
	mci dem, dem1;
	int count = 0;
	RUNS ++dem[s[i]];
	RUNS1 ++dem1[s1[i]];
	RUN { //65 -> 125
		if (dem[i] > 0 && dem1[i] > 0) ++count; // count = 1; // cout << char(i);
	}
	cout<<count; // if (t = 0) cout << 0;
}
