#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
using namespace std;
int n,q,k,a[10000005],f[10000005];
int Find(int k)
{
    int d=1, c=n, g, ans;
    while (d<=c)
    {
        g=(d+c)/2;
        if (f[g]<=k) c=g-1,ans=g;
        else d=g+1;
    }
    return ans;
}
signed main(void)
{
    FastIO;
    cin>>n;
    cin>>a[1]; f[1]=a[1];
    for(int i=2; i<=n; i++)
    {
        cin>>a[i];
        f[i]=min(f[i-1],a[i]);
    }
    cin>>q;
    for(int i=1; i<=q; i++)
    {
        cin>>k;
        cout<<Find(k)<<'\n';
    }

}