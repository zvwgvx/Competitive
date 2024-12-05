#include <iostream>
#include <algorithm>
#define RUN(i, begin, end) for (int i = begin; i < end; ++i)
using namespace std;
int n, a[121], hmax;
int main() {
    cin >> n;
    RUN(i, 0, n) cin >> a[i];
    sort(a, a + n);
    RUN(i, 0, n) {
        if(hmax <= a[i]) ++hmax;
    }
    cout << hmax;
    return 0;
}
    