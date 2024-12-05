#include <iostream>
#include <queue>
#define FOR(i, n) for (int i = 1; i <= n; i++)
#define faster ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;
int main() {
    faster;
    int n,a[n];
    cin >> n;
    char x[n];
    FOR(i, n) {
        cin >> x[i];
        a[x[i]]++;
    }
    int max = 0;
    FOR(i, n){ 
        if (max < a[x[i]]) max = a[x[i]];
    }
    priority_queue<char, vector<char>, greater<char>> priorityquere;
    FOR(i, n) {
        if (a[x[i]] == max) priorityquere.push(x[i]);
    }
    char kq;
    while (!priorityquere.empty())  {
        kq = priorityquere.top();
        break;
    }
    cout << kq;
    return 0;
}