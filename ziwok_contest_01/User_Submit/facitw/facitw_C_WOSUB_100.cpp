#include <iostream>
#define ll long long
const ll Nmax=1e5+5;
using namespace std;
ll a[Nmax],n,s;
int main()
{
    ll i,res=-1e6,t,d,c,g,L[Nmax],k;
    cin>>n;
    L[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        L[i]=L[i-1]+a[i];
    }
    cin>>s;
    for(i=1;i<=n;i++)
    {
        t=L[i]+s;
        d=1;
        c=n;
        while(d<=c)
        {
            g=(d+c)/2;
            if(L[g]==t)
            {
                k=g-i;
                break;
            }
            else if(L[g]<t) d=g+1;
            else c=g-1;
        }
        res=max(k,res);
    }
    if(res!=0) cout<<res;
    else cout<<-1;
    return 0;
}