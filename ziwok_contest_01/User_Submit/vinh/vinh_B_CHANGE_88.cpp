#include <bits/stdc++.h>
using namespace std;
int n,s;
int a[100000],dp[205][100005],i,j;
int main()
{
    //freopen("inp","r",stdin);
    //freopen("out","w",stdout);
    cin>>s>>n;
    int k=n+1;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n*2;i++) dp[i][0]=0;
    for(i=1;i<=s*2;i++) dp[0][i]=1e6;
    for(i=1;i<=n*2;i++)
    {
       for(j=1;j<=s;j++)
        {
            if(j>=a[i])
            {
                dp[i][j]=min(dp[i-1][j],dp[i][j-a[i]]+1);
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][s];

    return 0;
}