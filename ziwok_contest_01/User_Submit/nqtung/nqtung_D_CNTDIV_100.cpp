#include <bits/stdc++.h>
#define int long long
#define FastIO ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define FOR(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
int n,k,a[300005],f[300005],res=0;
int Find(int c)
{
    int d=1,r=c,g,ans=0;
    while (d<=r)
    {
        g=(d+r)/2;
        if (f[c]-f[g-1]>1) d=g+1;
        else r=g-1,ans=g;
    }
    return ans;
}
int32_t main()
{
    FastIO;
    cin>>n>>k;
    FOR(i,1,n)
    {
        cin>>a[i];
        f[i] = a[i]%k==0 ? f[i-1]+1 : f[i-1];
    }

    FOR(i,1,n) res+=(i-Find(i)+1);
    cout<<res;
    return 0;
}