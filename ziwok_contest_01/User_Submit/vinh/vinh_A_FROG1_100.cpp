#include <iostream>
#include <cmath>
using namespace std;
int n,a[100005],i,dp[100005];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dp[1]=0;
    dp[2]=abs(a[1]-a[2]);
    for(i=3;i<=n;i++)
    {
        dp[i]=min(dp[i-1]+abs(a[i-1]-a[i]),dp[i-2]+abs(a[i-2]-a[i]));
    }
    cout<<dp[n];
    return 0;
}