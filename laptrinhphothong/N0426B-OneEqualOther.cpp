#include <iostream>
#include <map>
#define RUN for (int i = 1; i <= n; i++) 
#define ll long long
#define nmax 1000005
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll a[nmax], n, s[nmax];
map<ll, ll> mark;
signed main()
{
	FASTER;
	cin >> n;
	RUN {
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}
	mark[s[n - 1]] = 1;
	RUN mark[a[i]]++; 
	if (mark[s[n - 1]] >= 2) cout << s[n - 1];
	else cout << "N";
}
