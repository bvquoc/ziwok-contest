#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int Nmax=1e6+5;
ll n,q,a[Nmax],k[Nmax],f[Nmax];

void readfile()
{
    ll i;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    cin >> q;
    for(i=1;i<=q;i++)
    {
        cin >> k[i];
    }
}
ll truyvan(ll x)
{
    ll dau=1,cuoi=n,res=-1;
    while(dau<=cuoi)
    {
        ll giua=(dau+cuoi)/2;
        if(f[giua]<=x)
        {
            res=giua;
            cuoi=giua-1;
        }else dau=giua+1;
    }
    return res;
}
void xuli()
{
    ll i;
    f[0]=1e9;
    for(i=1;i<=n;i++)
    {
        f[i]=min(f[i-1],a[i]);
    }
    for(i=1;i<=q;i++)
    {
        cout << truyvan(k[i])<<endl;
    }
}
int main()
{
    readfile();
    xuli();
    return 0;
}