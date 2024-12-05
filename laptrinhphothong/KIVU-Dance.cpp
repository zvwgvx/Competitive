#include <iostream>
#include <algorithm>
#define RUN(i, a, b) for (int i = a; i <= b; ++i)
using namespace std;
long long boys, girls, boy_h[100005], girl_h[100005];

int main() {
    cin >> boys >> girls;
    RUN(i, 1, boys) cin >> boy_h[i];
    RUN(i, 1, girls) cin >> girl_h[i];
    sort(boy_h + 1, boy_h + boys + 1);
    sort(girl_h + 1, girl_h + girls + 1);
    int pairnum = 0, j = 1;
    RUN(i, 1, boys) {
        if (boy_h[i] > girl_h[j]) {
            ++pairnum;
            ++j;
        }
	}
    cout << pairnum;
    return 0;
}
    