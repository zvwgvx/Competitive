//http://laptrinhphothong.vn/Problem/Details/5748
#include <iostream>
#include <algorithm> 
using namespace std; 
int main()  { 
    string str ;
	getline(cin,str);
    reverse(str.begin(), str.end()); 
    cout << str; 
    return 0; 
}