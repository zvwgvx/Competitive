#include <iostream>
#define RUN for (int i = 0; i < n; ++i)
#define RUNSTRING for (int j = 0; j < s.size(); ++j)
using namespace std;
int main() {
	int n;
	cin >> n;
	string s;
	bool check = false;
	RUN {
		cin >> s;
		RUNSTRING {
			if (s[j] == '6' || s[j] == '8') {
				cout << s << " ";
				check = true;
				break;
			}
		}
	}
	if(!check) cout << "-1"; 
}