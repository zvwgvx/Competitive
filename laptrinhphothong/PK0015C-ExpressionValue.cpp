#include <iostream>
#define RUNSTRING for(int i = 0 ; i < s.length() ; ++i)
#define RUN for(int i = 1 ; i <= d ; ++i)
#define ll long long
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
string s, sx[10005], dau[10005];
signed main() {
	FASTER;
	cin >> s;
    ll a[10005], d = 1, kq = 0;
	RUNSTRING { 
		if(s[i] >= '0' && s[i] <= '9') sx[d] += s[i];
		else{
			dau[d] = s[i]; 
			++d;
		}
	}
	RUN {
		a[i] = atoi(sx[i].c_str());
		kq += a[i];
	}
	RUN {
		if(dau[i] == "-") kq -= (a[i + 1] * 2);
	}
	cout << kq;
}