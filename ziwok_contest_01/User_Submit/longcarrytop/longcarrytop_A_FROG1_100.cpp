#include <bits/stdc++.h>
const int Nmax=1e5;
using namespace std;
long long n, a[Nmax], d[Nmax];
void readfile()
{
    long long i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
}
void qhd()
{
    long long i;
    d[1]=0;
    d[2]=abs(a[1]-a[2]);
    d[3]=min(d[1]+abs(a[1]-a[3]), d[2]+abs(a[2]-a[3]));
    for(i=4; i<=n; i++)
    {
        d[i]=min(d[i-1]+abs(a[i-1]-a[i]), d[i-2]+abs(a[i-2]-a[i]));
    }
}
void xuli()
{
    cout<<d[n];
}
int main()
{
    readfile();
    qhd();
    xuli();
    return 0;
}