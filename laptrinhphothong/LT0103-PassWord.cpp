#include <iostream>
#define RUNS for (int i = 0; i < sz(s); ++i)
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(0); cin.tie(0);
#define sz(x) (int)x.size()
const ll MOD = 1e9 + 7;
int solve(string s) {
    int dem1 = 0, dem2 = 0;
    RUNS {
        if ((s[i] >= '1' && s[i] <= '9')) ++dem1;
    }
    RUNS {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) ++dem2;
    }
    RUNS {
        if (!((s[i] >= '1' && s[i] <= '9' || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))) return -1;
    }
    if (dem1 + dem2 <= 5 || dem1 == 0 || dem2 == 0) return -1;
    else return dem1 + dem2;
}
signed main() {
    faster
    string s;
    getline(cin, s);
    int length = solve(s);
    if (length == -1) cout << "Error!";
    else cout << length;
}