#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
using namespace std;
int n;
int32_t main()
{
    FastIO;
    /***
    freopen("VACATION.INP","r",stdin);
    freopen("VACATION.OUT","w",stdout);
    ***/
    cin>>n;
    int a[n][3],dp[n][3];
    cin>>a[0][0]>>a[0][1]>>a[0][2];
    dp[0][0]=a[0][0],dp[0][1]=a[0][1],dp[0][2]=a[0][2];
    for(int i=1; i<n; i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
        dp[i][0]= a[i][0]+max(dp[i-1][1],dp[i-1][2]);
        dp[i][1]= a[i][1]+max(dp[i-1][0],dp[i-1][2]);
        dp[i][2]= a[i][2]+max(dp[i-1][0],dp[i-1][1]);
    }
    cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
}