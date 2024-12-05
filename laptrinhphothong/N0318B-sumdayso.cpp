#include <iostream>
#define FOR2TANG3(i,n) for(int i=2;i<=n;i+=3)
using namespace std;
int n,s,d;
int main() {
	cin>>n;
	s = 2;
	while (s < n){
		s+=3;
		if(s == n){
			FOR2TANG3(i,n) {
				d+=i;
			}
			cout<<d;
			return 0;
		}
	}
	cout<<"NO";
}
