#include <iostream>
#include <algorithm>
#define RUN for (int i = 1; i <= n; i++)
#define MAX 100005
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
long long n, truyvan, a[MAX], vt_greater_than_k, s[MAX];
bool SumDon(int delete_num, int value) { 
    return (delete_num + s[vt_greater_than_k - 1] - s[delete_num] >= 1ll * (vt_greater_than_k - delete_num - 1) * value);
}
int main() {
    faster;
    cin >> n >> truyvan;
    RUN cin >> a[i];
    sort(a + 1, a + n + 1);
    RUN s[i] = s[i - 1] + a[i]; // ct truy vấn 
    while (truyvan--) {
        int value;
        cin >> value;
        vt_greater_than_k = lower_bound(a + 1, a + n + 1, value) - a;
        if (vt_greater_than_k == 1) {
            cout << n << "\n";
            continue;
        }
        int left = 0, right = vt_greater_than_k;               // C H Ặ T  
        while (right - left > 1) {               //   
            int mid = (left + right) / 2;        // N H Ị  
            if (SumDon(mid, value)) right = mid;  //    
            else left = mid;                     // P H Â N
        }                                        //    
        cout << n - right << "\n";
    }
    return 0;
}