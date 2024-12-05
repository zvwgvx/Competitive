#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[1000005],maxx=0,d=0,s,f[1000005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("ASUM.inp", "r", stdin);
    freopen("ASUM.out", "w", stdout);
    cin>>n;
    cin>>s;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

        f[i]=f[i-1]+a[i];
    }
    sort(f,f+n+1);
    for(int i=0;i<=n;i++)
    {
        ll j=upper_bound(f+i,f+n+1,f[i]+s)-f;
        if(j<n+1)d+=n-j+1;
    }
    cout<<d;
}
