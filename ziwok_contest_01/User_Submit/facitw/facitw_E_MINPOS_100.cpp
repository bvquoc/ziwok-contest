#include <bits/stdc++.h>
#define ll long long
const ll Nmax=1e6+5;
using namespace std;
ll a[Nmax],n,q,b[Nmax];
struct f
{
  ll pos,vl;
};
f k[Nmax];
bool ss(f a,f b)
{
    return a.vl>b.vl;
}
int main()
{
    ll i,j,c,d,g;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>k[i].vl;
        k[i].pos=i;
    }
    sort(k+1,k+1+q,ss);
    c=1;
    for(i=1;i<=q;i++)
    {
        for(j=c;j<=n;j++)
        {
            if(a[j]<=k[i].vl)
            {
                b[k[i].pos]=j;
                c=j;
                break;
            }
        }
    }
    for(i=1;i<=q;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}