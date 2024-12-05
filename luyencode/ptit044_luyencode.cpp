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

#define fsize(array) (array).begin(), (array).end()
#define bsize(array) (array).rbegin(), (array).rend()

typedef long long ll;
typedef unsigned long long ull;
typedef vector <ll> vll;
typedef unordered_map <ll, ll> table4l;
typedef unordered_map <string, ll> tablesl;

const ll MAXN = 1e18;
const ll MINN = -1e18;
const ll M = 1e9 + 7;

ll power(ll a, ll n){
    if(n == 0) return 1;
    ll tmp = power(a, n / 2) % M;
    if(n % 2 == 0) return (tmp * tmp) % M;
    else return ((a % M) * ((tmp * tmp) % M)) % M;
}

int main(){
    ll N; 
    cin >> N;
    ll ans=((5 * power(3, N)) % M - (6 * power(2, N)) % M) % M;
    cout<<ans;
}