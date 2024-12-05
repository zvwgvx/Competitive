#include <iostream>
#define RUN for (int i = 2; i <= n; ++i)
using namespace std;
int main() {
    long long n, a[1000001], MIN = 0, kq = 0;
    cin >> n >> a[1]; 
    MIN = min(a[1],MIN); 
    kq = MIN;
    RUN {
        cin >> a[i];
        a[i] += a[i-1];
        MIN = min(MIN,a[i]);
        kq = max(kq,a[i] - MIN);
        // cout << a[i] << ' ' << MIN << ' ' << kq << endl;
    }
    cout << kq;
    return 0;
}
     