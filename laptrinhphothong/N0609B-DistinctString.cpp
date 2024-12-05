#include <iostream>
#include <map>
using namespace std;
int main() {
	string s;
	getline(cin,s);
	map<char, int> m;
    for (int i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }
	cout << m.size();
}