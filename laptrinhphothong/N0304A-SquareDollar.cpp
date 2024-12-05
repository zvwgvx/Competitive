#include <iostream>
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
using namespace std;

int main() {
    int n;
    cin >> n;
    RUN(i, 1, n) {
        RUN(j, 1, n) {
            cout << "$"; //co mot khoang trong o day
        }
        cout << "\n";
    }
    return 0;
    
}
