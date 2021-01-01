#include <bits/stdc++.h>
#define ll long long
const int Nmax=1e5+5;
using namespace std;
ll n, Max=-2e9, a[Nmax][3], k[Nmax][100];
bool cx[Nmax];
void readfile()
{
    ll i, j;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=3; j++)
        {
            cin>>a[i][j];
        }
    }
}
void qhd()
{
    ll i, res;
    for(i=1; i<=n; i++) k[i][0]=0;
    for(i=1; i<=3; i++) k[1][i]=a[1][i];
    for(i=2; i<=n; i++)
    {
        k[i][1]=a[i][1]+max(k[i-1][2], k[i-1][3]);
        k[i][2]=a[i][2]+max(k[i-1][1], k[i-1][3]);
        k[i][3]=a[i][3]+max(k[i-1][1], k[i-1][2]);
    }
    res=max(k[n][1], k[n][2]);
    res=max(res,k[n][3]);
    cout<<res;
}
int main()
{
    readfile();
    qhd();
    return 0;
}