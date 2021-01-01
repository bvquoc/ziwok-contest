#include <bits/stdc++.h>
#define ll long long
ll n,a[100005],S,s[100005];
using namespace std;
void nhap()
{
    cin>>n;
    ll i;
    s[0]=0;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    cin>>S;
}
void xl()
{
    ll d,g,c,res=-1,i,Max=-1;
    for (i=1;i<=n;i++)
    {
        d=i;
        c=n;
        while (d<=c)
        {
            g=(d+c)/2;
            if (s[i]+S==s[g])
            {
                res=g-i;
                break;
            }
            if (S+s[i]<s[g])
            c=g-1;
            else d=g+1;
        }
        Max=max(Max,res);
    }
    cout<<Max;
}
int main()
{
    nhap();
    xl();
    return 0;
}