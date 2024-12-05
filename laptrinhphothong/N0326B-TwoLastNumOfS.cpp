#include <iostream>
#define FOR(i, n) for (int i = 1; i <= n; ++i)
using namespace std;
int main()
{
    long long s = 0, n;
    cin >> n;
    FOR(i, n) s = (s + i * i) % 100;
    if (s >= 0 && s <= 9) cout << "0" << s;
    else cout << s;
    return 0;
}