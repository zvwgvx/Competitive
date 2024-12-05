#include <iostream>
#include <vector>
#define RUN(i, a, b) for (ulli i = a; i <= b; ++i)
#define ulli unsigned long long int
using namespace std;
typedef vector < ulli > vi; 
int main() {
    ulli n, q, p;
    cin >> n;
    vi a(n + 1), s(n + 1);
    s[0] = 0;
    RUN(i, 1, n) {
    	cin >> a[i];
    	s[i] = s[i - 1] + a[i];
    }
    cin >> q;
    RUN(i, 1, q) {
        cin >> p; // cin >> l >> r;
        cout << s[p] << '\n'; // s(r) - s(l - 1); 
    }
}