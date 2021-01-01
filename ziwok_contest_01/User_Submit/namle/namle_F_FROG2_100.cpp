#include <bits/stdc++.h>
#define D(i) max(0ll,(long long)i)
#define int long long
using namespace std;
long long s,n,res,a[100009],f[100009],k;
int32_t main()
{
    cin>>n>>k;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    a[0]=a[1];
    for (int i=2;i<=n;i++)
    {
        res=INT_MAX;
        for (int j=1;j<=k;j++)
            res=min(f[D(i-j)]+abs(a[i]-a[D(i-j)]),res);
        f[i]=res;
    }
    cout<<f[n];
    return 0;
}