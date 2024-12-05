#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

#pragma GCC optimize("O3")

using namespace std;

#define fsize(array) (array).begin(), (array).end()
#define bsize(array) (array).rbegin(), (array).rend()

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef unordered_map<ll, ll> table4l;
typedef unordered_map<string, ll> tablesl;

const ll MAXN = 1e18;
const ll MINN = -1e18;

int main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);


    ll N, d = 0;
    cin >> N;

    vll lst(N), dp(N), prev(N);

    for (int i = 0; i < N; ++i) {
        cin >> lst[i];
    }

    dp[0] = lst[0]; 

    for (int i = 0; i <= N; ++i) {
        if (lst[i] >= lst[i - 1]) {  
            dp[i] = dp[i - 1] + lst[i]; 
            d++;
            prev[i] = i - d + 1;
        } else {
            dp[i] = lst[i];
            d = 1;
        }
    }
    ll max_sum = *max_element(fsize(dp));

    cout << max_sum << endl;

    for (int i = 1; i < N; ++i) {
        if (dp[i] == max_sum) {
            for(int j = prev[i]; j <= i; j++) {
                cout << lst[j] << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}

