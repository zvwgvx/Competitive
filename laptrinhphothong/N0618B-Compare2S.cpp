#include <iostream>
using namespace std; 
int main() {
    string a, b;
    getline(cin,a);
    getline(cin,b);
    while(a.length() < b.length()) a = "0" + a;
    while(b.length() < a.length()) b = "0" + b;
    if(a == b) cout << 0;
    else if(a > b) cout << 1;
    else cout << -1;
}