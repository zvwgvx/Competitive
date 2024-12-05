#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t, n, k, p;
    cin >> n >> k >> p;
    t = (n - n / (k + 1)) * p;
    cout << t;
}
    