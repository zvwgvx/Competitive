#include <iostream>
#include <math.h>
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
using namespace std;
int n, s = 0;

int main() {
    cin >> n;
    RUN(i, 1, trunc(sqrt(n))) {
        if (n % i == 0) s += i + n / i; // tính sum ước của n ( trừ chính nó ) -> n phải chia đôi 
    }
    if (s == 2 * n) cout << "YES"; // n chia đôi -> tổng gấp đôi -> check s có = 2n hay ko  
    else cout << "NO";
    return 0;
}
