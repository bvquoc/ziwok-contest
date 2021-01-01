#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[100005],f[100005];
void nhap()
{
    cin>>n;
    ll i;
    for (i=1;i<=n;i++)
        cin>>a[i];
}
void xl()
{
    ll i,j;
    f[1]=0;
    f[2]=abs(a[1]-a[2]);
    for (i=3;i<=n;i++)
        f[i]=min(f[i-1]+abs(a[i-1]-a[i]),f[i-2]+abs(a[i-2]-a[i]));
    cout<<f[n];
}
int main()
{
    nhap();
    xl();
    return 0;
}