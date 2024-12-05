#include <iostream>
#include <math.h>
#include <algorithm>
#define RUN for (int i = 1; i <= 2 * n; i++)
const int N = 1e6 + 1;
using namespace std;
int n, a[N];
void SortTG(int a[], int n) {
    sort(a + 1, a + n  + 1);
    sort(a + n  + 1, a + 2 * n + 1, greater<int>());
}
int main() {
    cin >> n;
    RUN cin >> a[i];
    SortTG(a, n);
    RUN cout << a[i] << " ";
    return 0;
}