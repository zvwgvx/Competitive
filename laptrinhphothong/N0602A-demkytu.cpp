//http://laptrinhphothong.vn/Problem/Details/4622
#include<iostream>
using namespace std;
string s;
char c;
int dem = 0;
int main() {
    cin >> s >> c;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) dem++;
    }
    cout << dem;
    return 0;
}
    