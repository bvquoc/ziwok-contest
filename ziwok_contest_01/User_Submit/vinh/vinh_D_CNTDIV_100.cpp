#include <bits/stdc++.h>

using namespace std;
int n,a[300005],dp[300005],i,dem=0,tong,k;
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%k==0)
        {
            dp[i]=1;
        }
    }
    int j;
    for (i=1;i<=n;i++)
    {
        int tam=1,tong=dp[i];
        for (j=i+1;j<=n;j++)
        {
            if (tong+dp[j]<=1)
            {
                tam++;
                tong=tong+dp[j];
            }
            else break;
        }
        dem=dem+tam;
    }
    cout<<dem;

    return 0;
}