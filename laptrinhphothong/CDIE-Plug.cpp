#include <iostream>
#include <algorithm>
using namespace std;
long long sockets, plug, a[1000000], sockets_roi, electronic_devices;
int main() {
	cin >> sockets >> electronic_devices;
	plug = 1;
	for (int i = 1; i <= sockets; i++) cin >> a[i];
	sort(a + 1, a + sockets + 1);
	for (int i = sockets; i >= 1; i--) {
		if (plug >= electronic_devices) {
			break; 
		}
		plug += (a[i] - 1);
		++sockets_roi;
	}
	if (plug >= electronic_devices) cout << sockets_roi;
	else {
		cout << "-1";
	}
	return 0;
}
    