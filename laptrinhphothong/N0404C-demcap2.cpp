#include <iostream>
#include <map>
#include <vector>
#define FOR(i,n) for(int i=0;i<n;++i)
using namespace std;
int main() {
    int n,k;
    cin>>n;
    map<int, int> fre;
    vector<int> a(n);
    FOR(i,n) {
        cin>>a[i];
        ++fre[a[i]];
    }
    cin>>k;
    int kq = 0;
    FOR(i,n){
        if(a[i] == k - a[i]) kq += (fre[a[i]] - 1);
        else kq += (fre[k - a[i]]);
    }
    kq /= 2;
    cout<<kq;
    return 0;
}
