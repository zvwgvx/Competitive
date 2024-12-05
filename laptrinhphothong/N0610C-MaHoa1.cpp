#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
ll k;
string s, s1, s2;
int main() {
    cin >> k >> s;
    s1 = s.substr(0, k);
    s2 = s.substr(k, s.length());
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    cout << s1 << s2;
}