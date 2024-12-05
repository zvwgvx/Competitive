#include <iostream>
using namespace std;
struct CAUTHU {
	string name;
	int weight, height, age;
};
int main() {
	int n, k = 0;
	cin >> n;
	CAUTHU a[n];
	for (int i = 0; i < n; ++i) cin >> a[i].name >> a[i].weight >> a[i].height >> a[i].age;
	int min = a[0].age;
	for (int i = 0; i < n; ++i) {
		if (a[i].age < min) {
			min = a[i].age;
			k = i;
		}
	}
	cout << a[k].name << " " << a[k].weight << " " << a[k].height << " " << a[k].age;
}