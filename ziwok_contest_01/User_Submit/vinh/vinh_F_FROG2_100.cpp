#include <bits/stdc++.h>

using namespace std;
const int M=1e5+10;
int n,k,a[M];
long long dp[M];
int main()
{
    int i;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for (i=1;i<=k;i++)
    {
        dp[i]= abs( a[i]-a[1] );
    }
    int j;
    for (i=k+1;i<=n;i++)
    {
        long long minn=1e10;
        for (j=i-k;j<i;j++)
        {
          minn=min(minn,dp[j]+abs( a[i]-a[j] ));
        }
        dp[i]=minn;
    }
    cout<<dp[n];
    return 0;
}