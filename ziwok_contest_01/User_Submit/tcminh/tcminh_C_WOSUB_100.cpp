#include <bits/stdc++.h>
using namespace std;
const int Nmax=1e6+6;
int n,S,a[Nmax],s[Nmax],x,Max=-1e4;
void nhap()
{
    s[0]=0;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    cin>>S;
}
void xuli()
{
    bool ok=false;
    int i;
    for (i=1; i<=n; i++)
    {
        int d=1,c=n;
        while (d<=c)
        {
            int g=(d+c)/2;
            if (s[g]>=S)
            {
                c=g-1;
                x=g;
            }
            else d=g+1;
        }
    }
    for (i=x; i<=n; i++)
    {
        int d=1,c=n;
        while(d<=c)
        {
            int g=(d+c)/2;
            if(s[i]-s[g-1]==S)
            {
                Max=max(Max,i-g+1);
                ok=true;
            }
            if (s[i]-s[g-1]>S)
            {
                d=g+1;
            }
            else c=g-1;
        }
    }
    if (ok==true) cout<<Max;
    else cout<<-1;
}
int main()
{
    nhap();
    xuli();
    return 0;
}