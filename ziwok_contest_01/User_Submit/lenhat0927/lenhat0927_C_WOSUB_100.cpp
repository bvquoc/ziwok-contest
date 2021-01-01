#include <bits/stdc++.h>

using namespace std;
int s,a[100010],sum[100010],n;
int main()
{
    //freopen("input","r",stdin);
    //freopen("output","w",stdout);
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    cin>>s;
    int res=-1;
    int k;
    for(i=1;i<=n;i++)
    {
        k=s+sum[i-1];
        int l=i+1,r=n,g;
        while(l<=r)
        {
            g=(l+r)/2;
            if(sum[g]<k)
            {
                l=g+1;
                g=(r+l)/2;
            }
            if(sum[g]>k)
            {
                r=g-1;
                g=(r+l)/2;
            }
            if(sum[g]==k)
            {
                res=max(g-i+1,res);
                break;
            }
        }
    }
    cout<<res;
    return 0;
}