#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int NM=1e6+5;
ll n,k,a[NM],t[NM];

void readfile()
{
    ll i;
    cin >> n >> k;
    for(i=1;i<=n;i++)
    {
        cin >> a[i];
        if(a[i]%k==0) t[i]=1;
        else t[i]=0;
    }
}
void xuli()
{
    ll i,j,tam,dem,kqua=0;
    for(i=1;i<=n;i++)
    {
        tam=t[i];
        dem=1;
        for(j=i+1;j<=n;j++)
        {
            tam+=t[j];
            if(tam<=1) dem++;
            else break;
        }
        kqua+=dem;
    }
    cout << kqua;
}
int main()
{
    readfile();
    xuli();
    return 0;
}