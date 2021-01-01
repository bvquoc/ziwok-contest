#include <bits/stdc++.h>
#define int long long
using namespace std;
long long s,n,a[1000009],test,b[1000009],vt=1,minc=INT_MAX,x,q;
int tknp(int l,int r,int i,int x)
{
    int res,bien=0;
    while (l<=r)
    {
        res=(l+r)/2;
        if (b[res]-b[i-1]>=x)
        {
            bien=res-i+1;
            r=res-1;
            if (b[res]-b[i-1]==x)
                test=res;
        }
        else l=res+1;
    }
    return bien;
}
int32_t main()
{
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    cin>>x;
    for (int i=1;i<=n;i++)
        b[i]=b[i-1]+a[i];
    int ans=0,bien=0;
    for (int i=1;i<=n;i++)
    {
        test=0;
        bien=tknp(i,n,i,x);
        if (b[test]-b[i-1]==x)
            ans=max(ans,bien);
    }
    if (ans!=0)
        cout<<ans;
    else cout<<-1;
    return 0;
}