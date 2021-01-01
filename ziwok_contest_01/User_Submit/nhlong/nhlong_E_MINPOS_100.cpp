#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int NM=1e6+5;
long long n,q,a[NM],k[NM],m[NM];

void inp()
{
    long long  i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>k[i];
    }
}
long long  res(long long  x)
{
    long long d=1,c=n,kqua=-1;
    while(d<=c)
    {
        ll g=(d+c)/2;
        if(m[g]<=x)
        {
            kqua=g;
            c=g-1;
        }
        else d=g+1;
    }
    return kqua;
}
void process()
{
    long long i;
    m[0]=1e9;
    for(i=1;i<=n;i++)
    {
        m[i]=min(m[i-1],a[i]);
    }
    for(i=1;i<=q;i++)
    {
        cout<<res(k[i])<<endl;
    }
}
int main()
{
    inp();
    process();
    return 0;
}