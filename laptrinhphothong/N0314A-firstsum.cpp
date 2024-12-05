#include <iostream>
#define ll long long
using namespace std;
ll n,k;
int main() {
    cin>>n;
    ll i=1;
    while( k < n) {
        k+=i;
        i++;
    }
    if( k == n) cout<<"YES";
    else cout<<"NO";
    return 0;
}
    