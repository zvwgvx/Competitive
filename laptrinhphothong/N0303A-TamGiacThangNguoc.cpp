#include <iostream>
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
using namespace std;
long long n;

int main() {
    cin >> n;
    RUN(i, 3, n) { 
        RUN(j, 1, n) {
            cout << "#";
        }
        --n;
        cout << endl;
    }
}
