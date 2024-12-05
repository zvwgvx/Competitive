#define __SIZEOF_INT128__ 16
#define _CRT_SECURE_NO_WARNINGS
#pragma GCC optimize("fast-math")
#pragma GCC optimize("no-stack-protector") 
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC optimize("tree-loop-distribute-patterns")
#pragma GCC target("sse4.2,avx2,fma,tune=native")
#pragma comment(linker, "/stack:200000000")

#include <bits/stdc++.h>

using namespace std;

#define v vector
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define f(array) (array).begin(), (array).end()
#define b(array) (array).rbegin(), (array).rend()

int n;
int matrix[1005][1005];
int result = 0;

signed main() { 
    cin.tie(nullptr), cout.tie(nullptr) 
    -> ios_base::sync_with_stdio(false);

    #define file "main"
    #ifndef ONLINE_JUDGE
            freopen (file ".inp", "r", stdin);
            freopen (file ".out", "w", stdout);
    #endif  

    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int count[1005] = {0};  
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(matrix[i][j] == matrix[i][j + 1] && 
               matrix[i][j] == matrix[i + 1][j] && 
               matrix[i][j] == matrix[i + 1][j + 1]) {
                count[matrix[i][j]]++;
            }
        }
    }

    for(int i = 0; i < 1005; i++) {
        result = max(result, count[i]);
    }

    cout << result;
    return 0;   
}