//http://laptrinhphothong.vn/Problem/Details/4623
#include<iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -=32;
    }
    cout<<s;
    return 0;
}
    