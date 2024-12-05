#include <iostream>
#define ll long long
using namespace std;
const int N = 1e5 + 3;
ll sumchuso(ll n) {
    int sotachra,s = 0;
    if (n <= 9) return n;
    for(;n!=0;){
        sotachra = n % 10;
        s += sotachra;
        n /= 10;
    }    
    return s;
}
ll a[N];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        ans += sumchuso(a[i]);
    }
    cout << ans;
    return 0;
}