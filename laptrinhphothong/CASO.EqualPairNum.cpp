#include <iostream>
#define RUN(i, begin, end) for (int i = begin; i < end; ++i)
using namespace std;
long long int n, x, dem[100009], pairs;

int main(){
	cin >> n;
	RUN(i, 0, n){
        cin >> x;
        pairs += dem[x];
        ++dem[x]; 
	}
	cout << pairs; 
}
    