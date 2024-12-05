#include <iostream>
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
using namespace std;
#define ll long long

int main() {
	ll day, month, year;
	cin >> day >> month >> year;
	ll D = year - 1, K = 365 * D;
	D = year % 4;
	ll days, kq = 0;
	RUN(a, 1, year - 1) {
		if (a % 100 == 0) {
			if (a % 400 == 0) ++K;
		}
		else if (a % 4 == 0) ++K;
	}
	if (year % 100 == 0) {
		if (year % 400 == 0) kq = 1;
		else kq = 0;
	}
	else {
		if (year % 4 == 0) kq = 1;
		else kq = 0;
	}
	ll ds = 0;
	RUN(a, 1, month) {
		if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12) days = 31;
		if (a == 4 || a == 6 || a == 9 || a == 11) days = 30;
		if (a == 2) {
			if (kq == 1) days = 29;
			else days = 28;
		}
		RUN(b, 1, days) {
			K += 1;
			if (b == day && a == month) {
				ds = 1;
				break;
			}
		}
		if (ds == 1) break;
	}
	K %= 7;
	switch (K) {
	case 0:
		cout << "Sunday" << endl;
		break;
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	}
}
    