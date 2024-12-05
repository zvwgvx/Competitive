#include <iostream>
using namespace std;
#define RUN for (int i = 1; i <= n; ++i)
#define RUNK for (int i = 1; i <= k; ++i) 
#define JRUN for (int j = 1; j <= n; ++j)
int n, k, a[101], x[101];
void COUT() {
    RUNK {
        cout << a[i] << ' ';
    }
    cout << endl;
}
void ListChinHop(int i) {
    JRUN {
        if (x[j]) {
            a[i] = j;
            if (i == k) COUT();
            else {
                x[j] = 0;
                ListChinHop(i + 1);
                x[j] = 1;
            }
        }
    }
}
int main() {
    cin >> k >> n;
    RUN x[i] = 1;
    ListChinHop(1);
}
