//http://laptrinhphothong.vn/Problem/Details/4625
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    string s, s1="";
    getline(cin,s);
    for (int i=s.length()-1; i>=0; i--) s1+=s[i];
    if (s1==s) cout << "YES";
    else cout << "NO";
    return 0;
}