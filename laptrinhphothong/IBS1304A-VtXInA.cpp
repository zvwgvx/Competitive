#include <iostream>
#include <map>
#define RUN(i, a, b) for(int i = a; i <= b; ++i) 
using namespace std;
int main() {
    long long int n, ntruyvan, truyvan; 
    cin >> n;
    long long int a[n + 1];
    map<long long int, long long int> pos;
    RUN(i, 1, n) {
        cin >> a[i];
        pos[a[i]] = i;
    }
    cin >> ntruyvan;
    RUN(j, 1, ntruyvan) {
        cin >> truyvan;
        cout << pos[truyvan] << '\n';
    }
}
    