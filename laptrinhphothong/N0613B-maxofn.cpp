#include <iostream>
#include <string.h>
#define ll long long
using namespace std;
int main () {
    string s;
    ll max = 0;
    getline (cin, s);
    for (int i = 0; i < s.size (); i++) {
        int x = s[i] - 48;
        if (max < x) max = x;
    }
    cout << max;
}
    