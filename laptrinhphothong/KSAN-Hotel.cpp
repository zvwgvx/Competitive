#include <iostream>
#include <algorithm>
#define ll long long 
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
using namespace std;
const int N = 1e6 + 17;
int n, a[N], b[N], dem, j = 1; 

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    RUN(i, 1, n) cin >> a[i];
    RUN(i, 1, n) {
        cin >> b[i];
        b[i] += a[i];
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    RUN(i, 1, n) {
        if(a[i] < b[j]) ++dem;
        else ++j;
    }
    cout << dem;
}
    