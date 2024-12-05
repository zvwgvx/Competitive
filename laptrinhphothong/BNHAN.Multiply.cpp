#include <bits/stdc++.h>
#define RUN(i, a, b) for (int i = a; i <= b; ++i) 
using namespace std;
long long dong, cot, integer, a[1000005], inhanj= 0;
int main() {
    cin >> dong >> cot >> integer;
    RUN(i, 1, dong) {
        RUN(j, 1, cot) {
            ++inhanj; 
            a[inhanj] = i * j;
        }
    }
    sort(a+1,a+inhanj+1); 
    cout << a[integer];
}
    