#include <bits/stdc++.h>
#define ll long long
const ll Nmax=3e6+5;
using namespace std;
ll a[Nmax],k,n,L[Nmax];
bool check(ll x,ll y)
{
    ll d=0,i;
    for(i=x;i<=y;i++)
    {
        if(a[i]%k==0)
        {
            d++;
        }
        if(d>1) return false;
    }
    return true;
}
int main()
{
    ll i,j,pos,res=0,d;
    cin>>n>>k;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++)
    {
        L[i]=0;
        if(a[i]%k==0)
        {
            L[i]++;
        }
    }
    for(i=1;i<=n;i++)
    {
        d=0;
        for(j=i;j<=n;j++)
        {
            if(L[j]!=0)
            {
                d++;
            }
            if(d>1) break;
        }
        if(d<=2) res=res+j-i;
    }
    cout<<res;
    return 0;
}