#include <bits/stdc++.h>

using namespace std;
int n,q,a[1000005],f[1000005],k[100005];
void read()
{
    cin>>n;
    f[0]=1e9;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        f[i]=min(f[i-1],a[i]);
    }
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>k[i];
    }
}

void xuli()
{
    for(int i=1;i<=q;i++)
    {
        int l=1,r=n,res=-1,g;
        while(l<=r)
        {
            g=(l+r)/2;
            if(f[g]<=k[i])
            {
                res=g;
                r=g-1;
            }
            else l=g+1;
        }
        cout<<res<<endl;
    }
}

int main()
{
    read();
    xuli();
    return 0;
}