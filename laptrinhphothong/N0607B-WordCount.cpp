#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int pos, dem = 0;
	while ((pos = s.find("  ")) != string::npos) s.erase(s.begin() + pos);
	if (s.size() > 0 || s[0] == ' ') s.erase(s.begin());
	if (s.size() > 0 || s.back() == ' ') s.pop_back();
	pos = 0;
	while ((pos = s.find(" ", pos + 1)) != string::npos){
		++dem;
	}
	cout << dem + 1 ;
	return 0;
}