#include <iostream>  
#include <string.h>  
using namespace std;
int main()   {  
    string s,s1;
	getline(cin,s);
	getline(cin,s1);
	size_t found = s.find(s1);
	if(found != string::npos) cout<<"YES";
	else cout<<"NO";
}  