#include <iostream>
#include <map>
#define lli unsigned long long int
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define RUN for (lli i = 1; i <= n; i++)
#define RUNAUTO for (auto it : dem)
using namespace std;
lli n, k, a[1000001];
map<lli, lli> dem;
int main() {
	FASTER;
	cin >> n >> k;
	RUN {
		cin >> a[i];
		dem[a[i]]++;
	}
	lli t = 1;		
	RUNAUTO {
		if (it.second >= k){
			t = 0;
			cout << it.first << ' ';
		}
	}
	if (t == 1) cout << -1;
}