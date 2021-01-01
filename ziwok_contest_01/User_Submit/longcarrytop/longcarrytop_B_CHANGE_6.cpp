#include <bits/stdc++.h>
#define FOR(i,x,y) for(i=x; i<=y; i++)
const int Nmax=1e4+4;
using namespace std;
long long n, a[105], dp[Nmax][205], s;
void nhapxuat()
{
    long long i;
    cin>>s>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
}
void qhd()
{
    long long i, j, res, nham;
    FOR(i,1,n) dp[i][0]=0;
    FOR(i,1,s) dp[0][i]=2e9;
    FOR(i,n+1,n*2) dp[i][a[i-n]]=1;
    FOR(i,1,n)
    {
        FOR(j,1,s)
        {
            if(i<=n)
            {
                if(j==a[i]) dp[i][j]=1;
                if(j<a[i]) dp[i][j]=dp[i-1][j];
                if(j>a[i])
                {
                    res=j-a[i];
                    dp[i][j]=dp[i][res]+dp[i][j-res];
                }
                if(dp[i][j]>=dp[i-1][j] && dp[i-1][j]!=0) dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][s];
}
int main()
{
    nhapxuat();
    qhd();
    return 0;
}