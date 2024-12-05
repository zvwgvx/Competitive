#include <iostream>
#define ll long long
#define RUN(i, begin, end) for (ll i = begin; i <= end; ++i)
#define RUN0(i, begin, end) for (ll i = begin; i < end; ++i)
using namespace std;

ll Count_Dif_Ages(ll age[], ll n, ll &dif_ages) {
    dif_ages = 0;
    RUN(i, 0, 120) {
        RUN0(j, 0, n) {
            if (age[j] == i) {
                ++dif_ages;
                break;
            }
        }
    }
    return dif_ages;
}

int main() {
    ll age[1000001], n, age_found[1000001], dif_ages;
    cin >> n;
    RUN0(i, 0, n) cin >> age[i];    
    cout << Count_Dif_Ages(age, n, dif_ages);
}