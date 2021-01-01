#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    const int M=1e5+10;
    int i,s,a[M],sum[M];
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
        int l=i+1,r=n,pi;
        while(l<=r)
        {
            pi=(l+r)/2;
            if(sum[pi]<k)
            {
                l=pi+1;
                pi=(r+l)/2;
            }
            if(sum[pi]>k)
            {
                r=pi-1;
                pi=(r+l)/2;
            }
            if(sum[pi]==k)
            {
                res=max(pi-i+1,res);
                break;
            }
        }
    }
    cout<<res;
    return 0;
}