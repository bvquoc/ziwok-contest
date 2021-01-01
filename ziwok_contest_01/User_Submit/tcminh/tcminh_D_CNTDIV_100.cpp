#include <bits/stdc++.h>
using namespace std;
int n,k,a[300005],f[300005],res=0;
int Find(int c)
{
    int d=1,r=c,g,ans=0;
    while (d<=r)
    {
        g=(d+r)/2;
        if (f[c]-f[g-1]>1) d=g+1;
        else r=g-1,ans=g;
    }
    return ans;
}
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if (a[i] % k == 0) f[i]=f[i-1]+1; else f[i]=f[i-1];
    }

   for(int i=1; i<=n; i++) res+=(i-Find(i)+1);
    cout<<res;
    return 0;
}