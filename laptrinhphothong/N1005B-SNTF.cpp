#include <iostream>
#define ulli unsigned long long int
#define RUNCHECKPRIMES for (ulli i = 2; i * i <= n; i++)
#define RUN for (ulli i = 3; i <= 100; i++)
#define RUNBACH for (ulli i = 50; i >= 1; i--)
#define nmodi n % i == 0
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
bool Prime(ulli n) {
    if(n < 2) return false;    
    RUNCHECKPRIMES {
        if (nmodi) return false;
    }
    return n > 1;
}
using namespace std;
ulli n, F[1005];
signed main() {
    FASTER;
    cin >> n;
    F[1] = F[2] = 1;
    RUN F[i] = F[i - 1] + F[i - 2];
    RUNBACH {
        if (F[i] <= n && Prime(F[i])) {
            cout << F[i];
            break;
        }
    }
}
