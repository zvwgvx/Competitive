#include<bits/stdc++.h>
using namespace std;
long long n, arr[1000000], res = 0, CASH, B, i, cash_sum = 0, pockets = 1;
int main() {
    cin >> n;
    for(i = 0; i < n; ++i) {
        cin >> CASH >> B;
        if(B > 0) {
            pockets += (B - 1);
            res += CASH;
        }
        if(B == 0) {
            arr[cash_sum] = CASH;
            ++cash_sum;
        }
    }
    sort(arr, arr + cash_sum);
    while(pockets > 0 && cash_sum > 0) {
        res += arr[cash_sum - 1];
        --pockets;
        --cash_sum;
    }
    cout << res;
}
    