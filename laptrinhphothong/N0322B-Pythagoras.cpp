#include <iostream>
#include <cmath>
#define ll long long
#define FOR1(i,n) for (int i=1;i<=n;++i) 
#define FOR(j,i,n) for (int j=i+1;j<=n;j++) 
#define can_ii_plus_jj sqrt(i*i+j*j);
using namespace std;
int main() {
    ll n;
	cin>>n;
	ll a=1,b=0;
	if (n<5) cout<<-1;
	else {
        FOR1(i,n) {
	        FOR(j,i,n) {
                double z= can_ii_plus_jj;
                if((int)z==z && ( z<n || z==n)) cout<<i<<" "<<j<<" "<<(int)z<<endl;
	        }
	    }
	}
    return 0;
}
    