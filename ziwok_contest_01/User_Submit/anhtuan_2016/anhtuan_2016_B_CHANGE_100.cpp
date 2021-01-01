#include <bits/stdc++.h>
using namespace std;
#define  SMAX  20020
long long a[110], dp[SMAX];
int main()
{
    long long n,s,i,mn=s;
    //freopen("CHANGE.INP","r",stdin);
    //freopen("CHANGE.OUT","w",stdout);
    cin>>s>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1; i<=2*s;i++) dp[i]=i;
    for(int i=1;i<=2*s;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=a[j])   dp[i] = min(dp[i],dp[i-a[j]]+1);
        }
        if(i==s)   mn=dp[i];
        else if(i>s)    mn= min(mn,dp[i] + dp[i-s]);
    }
    cout<<mn<<endl;
    return 0;
}