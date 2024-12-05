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

#define alig alignas(64)
#define v vector
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define f(array) (array).begin(), (array).end()
#define b(array) (array).rbegin(), (array).rend()

ll  N, M, 
    matrix[1000][1000], 
    maxrow[1000],
    maxcol[1000],
    result = 0;

signed main() {
    cin.tie(nullptr), cout.tie(nullptr) 
    -> ios_base::sync_with_stdio(false);

    #define file "main"
    #ifndef ONLINE_JUDGE
            freopen (file ".inp", "r", stdin);
            freopen (file ".out", "w", stdout);
    #endif  

    cin >> M >> N;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    result = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            bool canSeeSea = false;
  
            bool northClear = true;
            for (int k = i-1; k >= 0; k--) {
                if (matrix[k][j] > matrix[i][j]) {
                    northClear = false;
                    break;
                }
            }
            canSeeSea |= northClear;

            bool southClear = true;
            for (int k = i+1; k < M; k++) {
                if (matrix[k][j] > matrix[i][j]) {
                    southClear = false;
                    break;
                }
            }
            canSeeSea |= southClear;

            bool westClear = true;
            for (int k = j-1; k >= 0; k--) {
                if (matrix[i][k] > matrix[i][j]) {
                    westClear = false;
                    break;
                }
            }
            canSeeSea |= westClear;

            bool eastClear = true; 
            for (int k = j+1; k < N; k++) {
                if (matrix[i][k] > matrix[i][j]) {
                    eastClear = false;
                    break;
                }
            }
            canSeeSea |= eastClear;

            if (canSeeSea) result++;
        }
    }

    cout << result;

    return 0;   
}