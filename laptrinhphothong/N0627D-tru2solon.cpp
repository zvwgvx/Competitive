#include<iostream>
#include<string>
#define RUNFROM(i,a) for(int i = a.length()-1; i>=0;i--) 
using namespace std;
string Sub(string a, string b){ 
    string kq=" ";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    bool neg = false;
    if(a<b) {
        swap(a,b);
        neg=true;
    }
    int borrow = 0;
    RUNFROM(i,a) {
        int so = a[i]-b[i]-borrow;
        if(so < 0) {
            so+=10;
            borrow = 1;
        }
        else {
			borrow = 0;
		}
        kq=(char)(so%10 + 48) + kq;
    }
    while(kq.length()>1 && kq[0]=='0') kq.erase(0,1);
    if(neg) kq="-"+kq;
    return kq;
}
int main() {
    string a,b;
	cin>>a>>b;
	cout<<Sub(a,b);
}