#include <bits/stdc++.h>
const int Nmax=1e6;
#define ll long long
using namespace std;
ll a[Nmax],n,dp[Nmax];
void doc()
{
    ll i;
    //freopen("ECH.INP","r",stdin);
    //freopen("ECH.OUT","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
}
void xuli()
{
    ll i;
    dp[1]=0;
    dp[2]= abs(a[2]-a[1]);
    for(i=3;i<=n;i++)
    {
        dp[i]=min(dp[i-1]+ abs(a[i]-a[i-1]),dp[i-2]+ abs(a[i]-a[i-2]));
    }
    cout<<dp[n];
}
int main()
{
    doc();
    xuli();
    return 0;
}