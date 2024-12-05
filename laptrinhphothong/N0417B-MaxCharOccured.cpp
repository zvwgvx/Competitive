#include<bits/stdc++.h>
#define RUN(i, l, r) for (int i = (l); i <= (r); ++i)
using namespace std;
char x[105], u;
int n, a[105];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    RUN(i, 1, n)  {
        cin >> x[i];
        ++a[x[i]];
    }
    int max = 0;
    RUN(i, 1, n) {
        if(max < a[x[i]]) max = a[x[i]];
    }
    priority_queue<char, vector<char>, greater<char>> pq;
    RUN(i, 1, n)     {
        if(a[x[i]] == max) pq.push(x[i]);
    }
    while(!pq.empty())
    {
        u = pq.top();
        break;
    }
    cout << u;
    return 0;
}