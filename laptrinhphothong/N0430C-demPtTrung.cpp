#include <iostream>
#include <map>
#include <vector>
#define FOR(i, n) for (int i = 0; i < n; ++i)
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> tso;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ++tso[a[i]];
    }
    int kq = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == a[i]) kq += (tso[a[i]] - 1);
        else kq += (tso[a[i]]);
    }
    kq /= 2;
    cout << kq;
    return 0;
}
