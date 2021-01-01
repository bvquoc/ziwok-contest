#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[100005],f[100005],k,b[100005];
void nhap()
{
    cin>>n>>k;
    ll i;
    for (i=1;i<=n;i++)
        cin>>a[i];
}
void xl()
{
    ll i,j,s;
    f[1]=0;
    f[2]=abs(a[1]-a[2]);
    b[k]=abs(a[1]-a[k]);
    b[k+1]=abs(a[1]-a[k+1]);
    for (i=3;i<=n;i++)
        if (i<=k+1)
        f[i]=min(f[i-1]+abs(a[i-1]-a[i]),f[i-2]+abs(a[i-2]-a[i]));
        else
        {
                b[k-1]=f[k-1];
                b[k-2]=f[k-2];
            f[i]=min(min(f[i-1]+abs(a[i-1]-a[i]),f[i-2]+abs(a[i-2]-a[i])),f[i-k]+abs(a[i]-a[i-k]));
            b[i]=min(min(b[i-1]+abs(a[i-1]-a[i]),b[i-2]+abs(a[i-2]-a[i])),b[i-k]+abs(a[i]-a[i-k]));
        }
    cout<<min(f[n],b[n]);
}
int main()
{
    nhap();
    xl();
    return 0;
}