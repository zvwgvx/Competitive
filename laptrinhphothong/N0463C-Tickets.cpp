#include <bits/stdc++.h>
#define RUN(i, a, b) for (int i = a; i <= b; ++i)
using namespace std;
const long long MAX = 1000001;
vector<long long> ticket_price;
long long x, clients_money[MAX], clients, sits;
signed main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> clients >> sits;
    RUN(i, 1, clients){
        cin >> x;
        ticket_price.push_back(x);
    }
    sort(ticket_price.begin(), ticket_price.end());
    RUN(i, 1, sits){
        cin >> clients_money[i];
        long long c = upper_bound(ticket_price.begin(), ticket_price.end(), clients_money[i]) - ticket_price.begin() - 1;
        if (ticket_price[c] <= clients_money[i]){
            cout << ticket_price[c];
            ticket_price.erase(ticket_price.begin() + c);
        }
        else {
            cout << -1;
        }
        cout << "\n";
    }
}
    