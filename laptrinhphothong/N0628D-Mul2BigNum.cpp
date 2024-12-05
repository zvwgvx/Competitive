#include <iostream>
#include <string>
#define RUNSTRING for (int i = len; i >= 0; i--)
#define RUNBACH for (int j = n - 1; j >= 0; j--)
using namespace std;
string mul(string a, string b) {
    string res = "";
    int n = a.length(), m = b.length(), len = n + m - 1, carry = 0;
    RUNSTRING {
        int tmp = 0;
        RUNBACH {
            if (i - j <= m && i - j >= 1) {
                int a1 = a[j] - 48, b1 = b[i - j - 1] - 48;
                tmp += a1 * b1;
            }
        }
        tmp += carry;
        carry = tmp / 10;
        res = (char)(tmp % 10 + 48) + res;
    }
    while (res.length() > 1 && res[0] == '0'){
        res.erase(0, 1);
    }
    return res;
}
int main() {
    string a, b;
    cin >> a >> b;
    cout << mul(a, b);
}
