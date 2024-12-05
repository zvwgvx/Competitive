#include <iostream>
#include <vector>
using namespace std;
int main() {
    long long int left, right, dem = 0;
    cin >> left >> right;
    vector<bool> isPrime(right - left + 1, true); // x là số nguyên tố khi và chỉ khi isPrime[x - l] == true
    for (long long i = 2; i * i <= right; ++i) {
        for (long long j = max(i * i, (left + i - 1) / i * i); j <= right; j += i) isPrime[j - left] = false;
    }
    if (1 >= left) isPrime[1 - left] = false;
    for (long long x = left; x <= right; ++x) {
        if (isPrime[x - left]) ++dem; // cout << x << '\n'; hoặc cout << x << " ";
    }
    cout << dem;
}
    