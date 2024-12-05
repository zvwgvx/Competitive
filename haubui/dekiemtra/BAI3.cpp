#include <iostream>
#include <vector>
#include <math.h>
#include <bitset>
#include <cctype>
#include <string>
#include <algorithm>
#include <unordered_map>

#pragma GCC optimize("O3")

using namespace std;

#define _in cin
#define _out cout
#define _up upper_bound
#define _low lower_bound
#define _bin binary_search
#define _f(array) (array).begin(), (array).end()
#define _b(array) (array).rbegin(), (array).rend()

typedef long long _ll;
typedef vector<_ll> _vll;
typedef unordered_map<_ll, _ll> _mll;
typedef unordered_map<char, _ll> _mcl;

signed main() {
    cin.tie(nullptr), cout.tie(nullptr)
        -> ios_base::sync_with_stdio(false);

#ifndef ONLINE_JUDGE
    freopen("main.inp", "r", stdin);
    freopen("main.out", "w", stdout);
#endif

    string p, s, result = "";
    _ll d = -1, k = 0, k1 = 0, non_zero_count = 0;
    _ll n;

    _in >> p >> s;
    string x = p;

    for (int i = 9; i >= 0; i--)
        if (s.find(i + '0') > s.size()) {
            d = i;
            break;
        }

    while (p[0] == '0') p.erase(0, 1);
    n = p.size();

    for (int i = 0; i < n; i++) {
        if (s.find(p[0]) <= s.size()) {
            k = 0;
            while (s.find(p[0]) <= s.size() && p[0] > '0') {
                p[0]--;
                if (p[0] == '0' && k1 == 0) {
                    p.erase(0, 1);
                    non_zero_count++;
                    break;
                }
            }

            if (non_zero_count > 0) {
                if (k1 == 0 && d == 0) _out << -1;
                if (k1 > 0 || k1 == 0 && d != 0) {
                    _out << d;
                    for (int x = 1; x < p.size(); x++) {
                        _out << d;
                    }
                }
                return 0;
            }
            _out << p[0];
            for (int x = 1; x < p.size(); x++) {
                _out << d;
            }
            return 0;
        }
        _out << p[0];
        k1++;
        p.erase(0, 1);
    }
}
