#include <iostream>
#define RUN for (lli i = 1; i <= n; ++i)
#define aiduong a[i] > 0
#define aiam a[i] < 0
#define lli long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
lli n, a[1000001];
int main() {
    FASTER;
    cin >> n;
    RUN cin >> a[i];
    lli CountDuong = 0, CountAm = 0;
    RUN {
        if (aiduong) ++CountDuong;
    }
    RUN {
        if (aiam) ++CountAm;
    }
    cout << CountDuong * CountAm;
}