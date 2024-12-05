//http://laptrinhphothong.vn/Problem/Details/5828
#include<iostream>
using namespace std;
int main() {
	string s;
	int count = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') count++;
	}
	cout << count;
	return 0;
}
    