#include <iostream>
#include<math.h>
#include <algorithm>
const int N = 1e6 + 1;
using namespace std;
int n,a[N];
void SortTG(int a[], int n){
    sort(a + 1, a+n/2 + 1);
    sort(a+n/2 + 1, a+n + 1, greater<int>());
}
int main() {
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    SortTG(a,n);
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    return 0;
}