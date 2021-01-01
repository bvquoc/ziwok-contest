#include <bits/stdc++.h>
using namespace std;
int a[20002],L[202][20002],n,t[202],s;
int main()
{
    int i,j,d;
    cin >> s >> n;
    for(i=1;i<=n;i++)
    {
        d=i+n;
        cin>>a[i];
        a[d]=-a[i];
    }
    for(i=1;i<=n*2;i++) L[i][0]=0;
    for(i=1;i<=s*2;i++) L[0][i]=1e6;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=s*2;j++)
        {
            if(j>=a[i])
            {
                L[i][j]=min(L[i-1][j],L[i][j-a[i]]+1);
            }
            else L[i][j]=L[i-1][j];
        }
    }
    for(i=n+1;i<=n*2;i++)
    {
        for(j=s*2;j>=1;j--)
        {
            if(j-a[i]<=s*2)
            {
                L[i][j]=min(L[i-1][j],L[i][j-a[i]]+1);
            }
            else L[i][j]=L[i-1][j];
        }
    }
    cout << L[n*2][s];
    return 0;
}