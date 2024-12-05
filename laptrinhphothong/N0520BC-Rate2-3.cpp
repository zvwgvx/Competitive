//http://laptrinhphothong.vn/Problem/Details/5779
#include <iostream>
#define RUN(i, begin, end) for (int i = begin; i < end; ++i)
using namespace std;

int main() {
    long long n, m, b[m][n], s[10001] = {0}, z = 99999999;
    cin >> m >> n;
    RUN(i, 0, m) {
        RUN(j, 0, n) {
            cin >> b[i][j];
            if (b[i][j] == 0) s[j] += 10;
            else s[j] += b[i][j];
        }
    }
    RUN(i, 0, n) {
        z = min(z, s[i]);
    }
	cout << z << endl; // 
    RUN(i, 0, n) {
        if (z == s[i]) cout << i + 1 << " ";
    }
}
    