#include <iostream>
#include <vector>
#include <math.h>
#include <bitset>
#include <cctype>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define v vector
#define umap unordered_map
#define uset unordered_set
#define ll long long
#define up upper_bound
#define low lower_bound
#define bin binary_search
#define f(array) (array).begin(), (array).end()
#define b(array) (array).rbegin(), (array).rend()

signed main() {
    cin.tie(nullptr), cout.tie(nullptr)
    -> ios_base::sync_with_stdio(false);

    #ifndef ONLINE_JUDGE
            freopen ("DAYCON.inp", "r", stdin);
            freopen ("DAYCON.out", "w", stdout);
    #endif

    int n;      
    ll L, R;
    cin >> n >> L >> R;
    
    v <ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    ll count = 0;
    ll curr_sum = 0;
    int left = 0;
    
    for (int right = 0; right < n; ++right) {
        curr_sum += a[right];
        
        while (curr_sum > R && left <= right) {
            curr_sum -= a[left];
            left++;
        }
        
        int temp_left = left;
        ll temp_sum = curr_sum;
        
        while (temp_sum >= L && temp_left <= right) {
            count++;
            temp_sum -= a[temp_left];
            temp_left++;
        }
    }
    
    cout << count << endl;

    return 0;
}
