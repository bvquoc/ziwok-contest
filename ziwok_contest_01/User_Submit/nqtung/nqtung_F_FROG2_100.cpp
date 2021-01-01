#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int n,k;
int main()
{
    FastIO;
    cin>>n>>k;
    vector<int> dp(n, 0), v(n);
    for (auto &a : v) cin >> a;
///for(int i=0; i<v.size(); i++) cout<<v[i]<<' ';
///Quy Hoach Dong
    for (int i=n-2; i>=0; i--)
    {
        dp[i]=dp[i+1]+abs(v[i]-v[i+1]);
        for (int j=2; j<=k && i+j<n; j++)
        dp[i]=min(dp[i],dp[i+j]+abs(v[i]-v[i+j]));
    }

  cout << dp[0];
}