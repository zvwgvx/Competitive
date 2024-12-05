/*
Giang là một sinh viên học tập và sinh sống tại một trường đại học gần biển và cậu ta rất
thích ăn hải sản, đặc biệt 3 món khoái khẩu của Giang có thể kể đến là: nướng, lẩu, ốc
len xào dừa (ba món ăn này lần lượt là 0, 1, 2). Bằng kiến thức của mình Giang biết được
rằng nếu tổng của số hiệu các món ăn trong 𝑛 ngày là một bội số của 3 thì chuỗi bữa ăn
này là một chuỗi ngày hợp lí về mặt dinh dưỡng. Vì vậy Giang rất tò mò muốn biết có
tổng cộng có bao nhiêu cách khác nhau để sắp xếp một chuỗi ngày ăn uống chất lượng.
Nói một khác, hãy giúp Giang đếm số dãy nguyên 𝑋 = (𝑋1, 𝑋2, … , 𝑋𝑛) gồm 𝑛 phần tử
thỏa mãn đồng thời hai điều kiện sau:
+ Tổng các phần tử của X chia hết cho 3
+ 0 ≤ Xi ≤ 2 ∀ i ∈ {1,2,…,n}
Dữ liệu vào: Ghi duy nhất một số nguyên dương n.
Dữ liệu ra: Ghi đáp án của bài toán sau khi chia dư cho 1000000007.
Ví dụ:
Input Output
2     3
*/
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

const int MOD = 1e9 + 7;

ll modExp(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) 
            result = (result * base) % mod;
            base = (base * base) % mod;
            exp /= 2;
    }
    return result;
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
    
    ll n;
    
    cin >> n;

    cout << modExp(3, n - 1, MOD);

    #ifdef LOCAL
        end = clock();
        cerr << "runtime : " << fixed << setprecision(7) << (double)(end - start) / (double)CLOCKS_PER_SEC << "'s";
    #endif
    
    return 0;   
}