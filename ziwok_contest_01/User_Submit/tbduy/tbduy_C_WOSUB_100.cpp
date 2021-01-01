#include <bits/stdc++.h>

using namespace std;
int n,s,a[100005],t[100006];
void read()
{
    cin>>n;
    t[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        t[i]=t[i-1]+a[i];
    }
    cin>>s;
}

void xuli()
{
    int res=-1,d=-2,l,r,g;
    for(int i=1;i<=n;i++)
    {
        l=i+1;
        r=n;
        while(l<=r)
        {
            g=(l+r)/2;
            if(t[g]-t[i-1]==s+a[i])
            {
                d=g;
                break;
            }
            else
            if(t[g]-t[i-1]>s+a[i]) r=g-1;
            else l=g+1;
        }
        res=max(res,d-i);
    }
    cout<<res;
}

int main()
{
    read();
    xuli();
    return 0;
}