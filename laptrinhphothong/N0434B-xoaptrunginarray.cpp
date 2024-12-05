//http://laptrinhphothong.vn/Problem/Details/5776
#include <iostream>
using namespace std;
long long j, n, dem = 0;
int a[100];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        j = i + 1;
        while (j < n) {
            if (a[i] == a[j]) {
                for (int k = j; k < n - 1; k++){
                    a[k] = a[k + 1];
                }
                n = n - 1;
            }
            else j = j + 1;
        }
    }
    n--;
    for (int i = 0; i < n + 1; i++) cout << a[i] << " ";
    return 0;
}
