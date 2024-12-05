#include <iostream>
#define ulli unsigned long long int
using namespace std; 
int main() {
    ulli n;
    cin >> n;
    ulli a[n + 1];
    for(ulli i = 1; i <= n; ++i) cin >> a[i];
    ulli maxl = 0, index = -1 ;
    for (ulli i = 1; i <= n; ++i) {
        if (a[i] % 2 == 0) {
            ulli l = 1, itemp = i;
            while (a[i + 1] % 2 == 0){
                ++l;
                ++i;
            }
            if (maxl < l) {
                maxl = l;
                index = itemp;
            }
        }
    }
    cout << maxl << '\n';
    for (ulli i = index; i < index + maxl; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
    