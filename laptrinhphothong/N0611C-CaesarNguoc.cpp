#include <iostream>
#define RUNS for (int i = 0; i < s.size(); i++)
using namespace std;
string s;
int n;
int main() {
	cin >> n >> s;
	RUNS {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] -= n;
			if (s[i] < 'A') {
		        s[i] += 26;
			}
			continue;
		}
		if (s[i] >= 'a' && s[i] <= 'z')
	    {
			s[i] -= n;
			if (s[i] < 'a') {
				s[i] += 26;
			}
			continue;
		}
	}
	cout << s;
}
