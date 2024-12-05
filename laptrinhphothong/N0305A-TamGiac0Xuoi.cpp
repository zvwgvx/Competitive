#include <iostream>
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
#define ll long long
using namespace std;
ll n;

int main() {
    cin >> n;
    RUN(i, 1, n) {
        RUN(j, 1, i) {
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}
