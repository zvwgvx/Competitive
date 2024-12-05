#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
	string ngoac;
	getline(cin, ngoac);
	stack<int> res;
	for (int i = 0; i < ngoac.length(); i++) {
		if (ngoac[i] == '(') res.push(i);
		else if (ngoac[i] == ')') {
			if (!res.empty()) res.pop();
			else res.push(i);
		}
	}
	if (res.empty()) cout << "YES";
	else cout << "NO";
}