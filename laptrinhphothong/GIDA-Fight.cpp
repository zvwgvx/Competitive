#include <iostream>
#include <algorithm>
#define RUN0(i, a, b) for (int i = a; i < b; ++i) 
using namespace std;

int main() {
    long long int n, kq = 0, score = 0;
    cin >> n;
    long long int dang_cai_school[n + 1], so_tai_school[n + 1];
    RUN0(i, 0, n) cin >> dang_cai_school[i];
    RUN0(i, 0, n) cin >> so_tai_school[i];
    sort(dang_cai_school, dang_cai_school + n);
    sort(so_tai_school, so_tai_school + n);
    RUN0(i, 0, n) {
        if(dang_cai_school[score] < so_tai_school[i]) {
            ++score;
            ++kq;
        }
    }
    cout << kq;
}
    