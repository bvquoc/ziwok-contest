#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int n,i,a[1000009],q,k,f[1000009];
int main()
{
  //freopen("MINPOS.INP","r",stdin);
  //freopen("MINPOS.OUT","w",stdout);
    cin>>n;
    int minn=1e12;
    for(i=1;i<=n;i++)
    {
        cin>>f[i];
        minn=min(minn,f[i]);
        a[i]=minn;
    }
    cin>>q;
    int res;
    for(i=1;i<=q;i++)
    {
        cin>>k;
        int l=1,r=n;
        while(l<=r)
        {
            int pi=(l+r)/2;
            if(a[pi]<=k)
            {
                res=pi;
                r=pi-1;
            }
            else l=pi+1;
        }
        cout<<res<<'\n';
    }
    return 0;
}