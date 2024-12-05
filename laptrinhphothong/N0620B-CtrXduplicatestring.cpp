#include <iostream>
#define FOR(i,s) for(int i=0;i<s.size();++i)
using namespace std;
string s; 
int main() {
    getline(cin,s);
    FOR(i,s) {
        int j=i+1;
        do {
            if(s[i]==s[j]) s.erase(j,1);
            else j++;
        } while(j<=s.length());
    }
    cout<<s;
}