#include <iostream>
using namespace std;
string s;
char CtrX;
int main(){
    cin >> s >> CtrX;
    int i = 0;
    while(i <= s.size()){
        if(s[i] == CtrX) s.erase(i,1);
        else ++i;
    }
    cout << s;
}
    