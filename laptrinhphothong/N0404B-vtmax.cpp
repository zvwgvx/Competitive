#include <iostream>
using namespace std;
const int N = 1e5 + 1;
int main() {
	int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;++i) cin>>a[i];
    int vtmax = 1,max = a[1];
    for(int i=1;i<=n;++i){
        if(a[i] >= max) {
            max = a[i];
            vtmax = i;
        }
    }
    cout<<vtmax;
	return 0;
}
    