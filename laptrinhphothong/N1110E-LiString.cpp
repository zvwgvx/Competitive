#include <iostream>
#include <set>
using namespace std;
string s, t;
int n;
set <string> res;

void Try(int x) {
    if (x > n) {
        if (t.size() != 0) {
            res.insert(t);
        }
        return;
    }
    for (int i = 0; i <= 1; i++) {
        if (i) {
            t += s[x];
        }
        Try(x + 1);
        if (i) t.erase(t.size() - 1, 1);
    }
}

int main() {
    cin >> s;
    n = s.size() - 1;
    Try(0);
    for (auto s : res) cout << s << '\n';
}
