#include<iostream>
using namespace std;
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
signed main() {
    FASTER;
    string s, s1, s2; 
    getline(cin,s);
    getline(cin,s1);
    getline(cin,s2);
    int s1place = s.find(s1);
    while(s1place != string::npos) {
        s.replace(s1place,(int)s1.size(),s2);
        s1place = s.find(s1);
    }
    cout << s;
}