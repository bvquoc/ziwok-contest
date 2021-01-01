#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n,a[100005],b[100005],c[100005];
void nhap()
{
    cin>>n;
    int i;
     for (i=1;i<=n;i++) cin>>a[i]>>b[i]>>c[i];
}
void xl()
{
    int Max1=0,Max2=0,s,t;
    int i;
    for (i=1;i<=n;i++)
    if (i%2==0)
        {
            s=min(min(a[i-1],b[i-1]),c[i-1]);
            t=max(max(a[i-1],b[i-1]),c[i-1]);
            Max1+=max(max(a[i],b[i]),c[i])+a[i-1]+b[i-1]+c[i-1]-s-t;
        }
    else
    {
            s=min(min(a[i+1],b[i+1]),c[i+1]);
            t=max(max(a[i+1],b[i+1]),c[i+1]);
            Max2+=max(max(a[i],b[i]),c[i])+a[i+1]+b[i+1]+c[i+1]-s-t;
        }

    cout<<max(Max1,Max2);
}
int main()
{
    nhap();
    xl();
    return 0;
}