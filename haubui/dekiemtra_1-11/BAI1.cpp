#include <bits/stdc++.h>

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC diagnostic ignored "-Wunused-parameter"

using namespace std;

#define v vector
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define f(array) (array).begin(), (array).end()
#define b(array) (array).rbegin(), (array).rend()

#ifdef LOCAL
    mt19937 rnd(chrono::system_clock::now().time_since_epoch().count());
#endif

ll convert (string str) {
    ll answer = 0;
    for (auto e : str) {
        answer = answer * 10 + (e - '0');
    }

    return answer;
}
signed main() { 
    cin.tie(nullptr), cout.tie(nullptr) 
    -> ios_base::sync_with_stdio(false);

    #define file "main"
    #ifndef ONLINE_JUDGE
            freopen (file ".inp", "r", stdin);
            freopen (file ".out", "w", stdout);
    #endif

    #ifdef LOCAL
        clock_t start, end;
        start = clock();
    #endif
    
    string str, carry;
    ll result = 0, cnt = 0;
    
    cin >> str;

    str += "*";
    for (auto e : str) {
        if (isdigit(e)) {
            carry += e;
            cnt++;
        } else {
            result += convert(carry);
            carry = "";
        }
    }

    result = (result == 0) ? -1 : result;
    if (cnt == str.size() - 1) result = 0;
    cout << result;

    #ifdef LOCAL
        end = clock();
        cerr << "runtime : " << fixed << setprecision(7) << (double)(end - start) / (double)CLOCKS_PER_SEC << "'s";
    #endif
    
    return 0;   
}