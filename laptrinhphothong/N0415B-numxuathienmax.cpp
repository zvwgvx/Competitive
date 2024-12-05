#include <iostream>
#define FOR(i,n) for (int i = 0; i < n; ++i)
#define FOR1(j,n) for (int j = 0; j < n; ++j)
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    FOR(i,n) cin>>a[i];
    int max = 1;
    FOR(i,n) {
        int dem = 0;
        FOR1(j,n) {
            if (a[i] == a[j]) ++dem;
        }
        if (max < dem) max = dem; 
    }
    cout<<max;
}