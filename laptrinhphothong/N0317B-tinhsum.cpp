#include<iostream>
#define ll long long
#define lb long double
using namespace std;
lb i,n,sum;
int main() {
    cin >> n;
    while(sum < n){
        ++i;
        sum += 1/i;
    }
    cout << (ll)(i);
}