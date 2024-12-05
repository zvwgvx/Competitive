#include <iostream>
#define ll long long
#define FORCAN2(i,n) for(int i = 2; i * i <= n ; i++)
#define FORSTRINGSIZE(i,s) for(int i = 0;i < s.size(); i++)
#define nmodi n % i == 0
using namespace std;
bool SNT(int n){
    if(n < 2) return false;
    FORCAN2(i,n) {
        if(nmodi) return false;
    }
    return true;
}
int main(){
    ll sum = 0;
    string s;
    cin>>s;
    FORSTRINGSIZE(i,s) sum += (s[i] - 48);
    if(SNT(sum) == true) cout<<"YES";
    else cout<<"NO";
}