#include <iostream>
#define RUN(i, a, b) for(int i = a; i <= b; ++i)
using namespace std;
long long int n, ans;
char a[1003];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    RUN(i, 1, n) cin >> a[i];
    RUN(i, 1, n - 1) ans += a[i] == a[i + 1];
    cout << ans;
    return 0;
}