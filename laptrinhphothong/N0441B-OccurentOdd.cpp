#include <iostream>
#include <map>
#define ulli unsigned long long int 
#define RUN(i,n) for(ulli i = 0; i < n; ++i)
using namespace std;
const int N = 2 * 1e5 + 1;
int n,a[N];
map<ulli, ulli> dem;
int main() {
    cin>>n;
    RUN(i,n) {
        cin>>a[i];
        ++dem[a[i]];
    }
    RUN(i,n) {
        if(dem[a[i]] % 2 != 0) {
            cout<<a[i];
            break;
        }
    }
}