#include <iostream>
#include <algorithm>
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
#define BACK(i, end, begin) for (int i = end; i >= begin; --i)
using namespace std;
long long orois, plugs, a[1000001], oroisless, e_devices;

int main() {
	cin >> orois >> e_devices;
	plugs = 1;
	RUN(i, 1, orois) cin >> a[i];
	sort (a + 1, a + orois + 1);
	BACK(i, orois, 1) {
		if (plugs >= e_devices) {
			break; 
		}
		plugs += (a[i] - 1);
		++oroisless;
	}
	if (plugs >= e_devices) cout << oroisless;
	else cout << "-1";
}
    