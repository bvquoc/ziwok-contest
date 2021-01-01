#include <bits/stdc++.h>
#define int long long
#define FastIO ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
int s,n,a[100005],L[205][100005];
int32_t main()
{
    FastIO;
    cin>>s>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i]; a[i+n]=-a[i];

    }
    n*=2;

    for(int i=1; i<=n; i++)
    for(int j=1; j<=s; j++)
    {
        L[0][j]=1e9;
        L[i][j]=L[i-1][j];
        if (j>=a[i])
        L[i][j]=min(L[i-1][j],L[i][j-a[i]]+1);
    }
    cout<<L[n/2][s];

}