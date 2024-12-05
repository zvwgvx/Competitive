#include <bits/stdc++.h>
#define N 2000000
using namespace std;
bool k[N];
void Sieve() {
    fill(k + 1, k + N + 1, 1);
    k[1] = 0;
    for (long long i = 2; i * i <= N; i++){
        if (k[i] == 1){
            for (long long j = i * i; j <= N; j += i) k[j] = 0;
        }
    }
}
int nt[N], n, q;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Sieve();
    nt[0] = 0;
    for (int i = 1; i <= N; i++) {
        if (k[i] == 1) nt[i] = nt[i - 1] + 1;
        else nt[i] = nt[i - 1] + 0;
    }
    cin >> q;
    for (int i = 1; i <= q; i++) {
        cin >> n;
        cout << nt[2 * n] - nt[n + 1 - 1] << '\n';
    }
}