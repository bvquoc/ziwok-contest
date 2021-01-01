#include <bits/stdc++.h>
#define D(i) max(0ll,(long long)i)
#define int long long
using namespace std;
long long s,n,res,minc=INT_MAX,f[1000009],c[1000009],vt1,x,q,vt2,l,r,ans,k;
struct Q
{
    long long l,r;
};
Q a[1000009];
bool cmp(const Q &x,const Q &y)
{
    return (x.l<y.l || (x.l==y.l && x.r<y.r));
}
int32_t main()
{
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i].l;
        a[i].r=i;
    }
    sort(a+1,a+1+n,cmp);
    cin>>q;
    for (int i=1;i<=n;i++)
        c[i]=a[i].l;
    for (int i=1;i<=n;i++)
    {
        if (a[i].r<minc)
            minc=a[i].r;
        f[i]=minc;
    }
    for (int i=1;i<=q;i++)
    {
        cin>>x;
        vt2=upper_bound(c+1,c+1+n,x)-c;
        ans=f[vt2-1];
        cout<<ans<<endl;
    }
    return 0;
}