#include <iostream>
#define RUNR for (long i = 1; i <= r; ++i)
#define RUN2R for (long i = 2; i <= r; ++i)
#define RUN2IR for (long j = 2 * i; j <= r; j += i)
#define RUN for (long i = l; i <= r; ++i)
using namespace std;
const int N = 1e5 + 1;
int l, r, dem = 0, a[N];
int main() {
    cin >> l >> r;
    RUNR a[i] = 1;
    RUN2R {
        RUN2IR a[j] += i;
    }
    RUN {
        dem += a[i] > i;
    }
    cout << dem;
}
