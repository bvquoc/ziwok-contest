#include <bits/stdc++.h>

using namespace std;
int n,k,a[100005];
int main()
{
    int i,j;
    long long L[100001];
    cin >> n >> k;
    for (i=1;i<=n;i++)
        cin >> a[i];
    L[1]=0,L[2]=abs(a[2]-a[1]);
    for (i=3;i<=n;i++)
    {
        L[i]=1e10;
        if (i<=k)
            for (j=1;j<i;j++)
                L[i]=min(L[i],L[j]+abs(a[i]-a[j]));
        else
            for (j=i-k;j<i;j++)
                L[i]=min(L[i],L[j]+abs(a[i]-a[j]));
    }
    cout << L[n];
    return 0;
}