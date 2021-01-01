#include <bits/stdc++.h>
const int Nmax=1e5+5;
using namespace std;
int a[Nmax],b[Nmax],c[Nmax],n,L[Nmax][5];
int main()
{
    int i,res,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        for(j=1;j<=3;j++)
        {
            if(j==1) L[i][j]=a[i];
            if(j==2) L[i][j]=b[i];
            if(j==3) L[i][j]=c[i];
        }
    }
    L[1][1]=a[1];
    L[1][2]=b[1];
    L[1][3]=c[1];
    for(i=2;i<=n;i++)
    {
        L[i][1]=L[i][1]+max(L[i-1][2],L[i-1][3]);
        L[i][2]=L[i][2]+max(L[i-1][1],L[i-1][3]);
        L[i][3]=L[i][3]+max(L[i-1][1],L[i-1][2]);
    }
    res=max(L[n][1],L[n][2]);
    res=max(res,L[n][3]);
    cout << res;
    return 0;
}