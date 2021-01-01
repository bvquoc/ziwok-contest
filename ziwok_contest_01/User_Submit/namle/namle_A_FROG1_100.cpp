#include <bits/stdc++.h>
#define int long long
using namespace std;
long long s,n,a[100009],f[100009];
int Try(int k,int s)
{
    if (k>n)
        return INT_MAX;
    if (k==n)
        return s;
    int res=INT_MAX;
    res=min(res,Try(k+1,s+abs(a[k+1]-a[k])));
    res=min(res,Try(k+2,s+abs(a[k+2]-a[k])));
    return res;
}
int32_t main()
{
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    //memset(f,-1,sizeof f);
    //cout<<Try(1,0);
    a[0]=a[1];
    for (int i=2;i<=n;i++)
        f[i]=min(f[i-1]+abs(a[i]-a[i-1]),f[i-2]+abs(a[i-2]-a[i]));
    cout<<f[n];
    return 0;
}