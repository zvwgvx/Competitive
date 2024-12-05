//http://laptrinhphothong.vn/Problem/Details/5769
#include <iostream>
using namespace std;
long long n,res;
int main() {
	cin>>n;
	while (n%5==0){
		n/=5;
		res++;
	}
	cout<<res;
}

