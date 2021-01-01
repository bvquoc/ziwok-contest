#include <bits/stdc++.h>
const int Nmax=1e5+5;
using namespace std;
long long n, a[Nmax], d[Nmax], k;
void readfile()
{
    long long i;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
}
void qhd()
{
    long long i, j, res=2e9;
    d[1]=0;
    for(i=2; i<=k; i++)
    {
        d[i]=abs(a[i]-a[1]);
    }
}
void xuli()
{
    long long i, j, res;
    d[0]=0;
    for(i=k+1; i<=n; i++)
    {
        res=2e9;
        for(j=i-k; j<=i-1; j++)
        {
            d[i]=d[j]+abs(a[j]-a[i]);
            res=min(res, d[i]);
        }
        d[i]=res;
    }
    cout<<d[n];
}
int main()
{
    readfile();
    qhd();
    xuli();
    return 0;
}