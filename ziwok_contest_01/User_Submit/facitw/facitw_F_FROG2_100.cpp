#include <bits/stdc++.h>
const int Nmax=1e5+5;
using namespace std;
int a[Nmax],n,k,L[Nmax],m;
int main()
{
    int i,j,m;
    cin>>n>>k;
    for(i=1;i<=n;i++) cin>>a[i];
    L[1]=0;
    L[2]=abs(a[1]-a[2]);
    for(i=3;i<=n;i++)
    {
        L[i]=1e10;
        for(j=i-k;j<i;j++)
        {
            if(j<=0) L[i]=1e10;
            else L[i]=min(L[i],L[j]+abs(a[i]-a[j]));
        }
    }
    cout<<L[n];
    return 0;
}