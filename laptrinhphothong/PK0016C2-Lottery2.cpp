#include <iostream>
#include <map>
using namespace std;
long long n, q;
int main()
{
    map<long long, long long> x;
	for(int i = 1; i <= n; ++i){
		long long tg;
		cin >> tg;
		++x[tg];
	}
	cin >> q;
	for(int i = 1; i <= q; ++i){
		long long temp;
		cin >> temp;
		cout << x[temp] << '\n';
	}
}
