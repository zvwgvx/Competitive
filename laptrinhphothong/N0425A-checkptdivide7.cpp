#include <iostream>
using namespace std;
bool checkdivide7(int a[], int n){
    bool check;
    for(int i=1;i<=n;i++){
        if(a[i] % 7 == 0) check = true;
        else check = false;
    }
    return check;
}
int main() {
    int n,a[101];
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    if(checkdivide7(a,n) == true) cout<<"YES";
    else cout<<"NO";
    
}
    