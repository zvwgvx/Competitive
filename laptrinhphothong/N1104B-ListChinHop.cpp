//http://laptrinhphothong.vn/Problem/Details/4668
#include <iostream>
using namespace std;
#define RUN(index, begin, end) for (int index = begin; index <= end; ++index) 
int n, k, a[101], x[101];

void COUT() {
    RUN (i, 1, k) { 
        cout << a[i] << ' ';
    }
    cout << endl;
}

void ListChinHop(int i) {
    RUN (j, 1, n) { 
        if (x[j]) {
            a[i] = j;
            if (i == k) COUT();
            else {
                x[j] = 0;
                ListChinHop(i + 1);
                x[j] = 1;
            }
        }
    }
}

int main() {
    cin >> k >> n;
    RUN (i, 1, n) x[i] = 1; 
    ListChinHop(1);
}
