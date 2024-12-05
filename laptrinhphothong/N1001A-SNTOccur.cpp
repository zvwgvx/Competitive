#include <iostream>
#include <math.h>
#define lli long long int
#define RUN0(i, begin, end) for (int i = begin; i < end; ++i)
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
using namespace std;

bool checkprimes(lli a) {
    if (a < 2) return false;
    RUN(i, 2, sqrt(a)) {
        if (a % i == 0) return false;
    }
    return true;
}

lli checkprimesinARRAY(lli a[], lli n) {
    lli dem = 0;
    RUN(i, 0, n) {
        if (checkprimes(a[i])) ++dem;
    }
    return dem;
}

int main() {
    lli n, a[1000001];
    cin >> n;
    RUN(i, 0, n) cin >> a[i];
    cout << checkprimesinARRAY(a, n);
}
    