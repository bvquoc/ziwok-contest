#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[1000005],q,k[100005],f[1000005];
void nhap()
{
    cin>>n;
    ll i;
    for (i=1;i<=n;i++)
        cin>>a[i];
    f[1]=a[1];
    for (i=2;i<=n;i++)
    {
        f[i]=min(f[i-1],a[i]);
    }
}
ll tk(ll k)
{
    ll d=1,c=n,g,p=-1;
    while (d<=c)
    {
        g=(d+c)/2;
        if (f[g]<=k)
        {
            p=g;
            c=g-1;
        }
        else d=g+1;
    }
    return p;
}
void xl()
{
    cin>>q;
    ll i,j;
    for (i=1;i<=q;i++)
    {
        cin>>k[i];
    }
    for (i=1;i<=q;i++)
    {
        cout<<tk(k[i])<<endl;
    }
}
int main()
{
    nhap();
    xl();
    return 0;
}