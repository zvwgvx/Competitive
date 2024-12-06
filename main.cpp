#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<int, int> prefix_map;
    int prefix_sum = 0;
    int max_length = 0;
    int start_index = -1;

    prefix_map[0] = -1;

    for (int i = 0; i < n; ++i) {
        prefix_sum += a[i] - k;

        if (prefix_map.find(prefix_sum) != prefix_map.end()) {
            int prev_index = prefix_map[prefix_sum];
            int length = i - prev_index;
            if (length > max_length) {
                max_length = length;
                start_index = prev_index + 2;
            }
        } else {
            prefix_map[prefix_sum] = i;
        }
    }

    if (max_length > 0) {
        cout << max_length << " " << start_index << endl;
    } else {
        cout << 0 << endl;
    }
}
int main() {

    #ifndef ONLINE_JUDGE
            freopen ("main.inp", "r", stdin);
            freopen ("main.out", "w", stdout);
    #endif

    solve();
    return 0;
}
