#include <iostream>
#include <algorithm>
#define lli long long int
#define RUN for(lli i = 1; i <= n; ++i) 
using namespace std;
struct HS {
	string name;
	lli T, IT;
};
HS hs[1000009];
bool SORT(HS a, HS b) {
	if (a.name < b.name) return true;
	if (a.name > b.name) return false;
	if (a.name == b.name) {
	    if (a.T + a.IT < b.T + b.IT) return true;
		if (a.T + a.IT > b.T + b.IT) return false;
		if (a.T + a.IT == b.T + b.IT) {
			if(a.T < b.T) return true;
			else return false;
		}
	}
}
int main() {
	lli n;
	cin >> n;
	RUN cin >> hs[i].name >> hs[i].T >> hs[i].IT;
	sort(hs + 1, hs + n + 1, SORT);
	RUN cout << hs[i].name << " " << hs[i].T << " " << hs[i].IT << endl;
}