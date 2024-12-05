#include <iostream>
#include <string.h>
#define RUNS for (int i = 0; i < s.length(); ++i)
#define RUNS1 for (int i = 0; i < s1.length(); ++i)
using namespace std;
int Count (string s, string s1) {
	int i, j, ok = 1, dem = 0;
	RUNS {
		if (s[i] == s1[0]) {
			ok = 1;
			RUNS1 {
				if (s1[j] != s[i + j]) {
					ok = 0;
					break;
				}
			}
			if (ok == 1) ++dem;
		}
	}
	return dem;
}
int main() {
	string s,s1;
	cin >> s >> s1;
	cout << Count (s, s1);
	return 0;
}