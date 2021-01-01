#include <bits/stdc++.h>

using namespace std;
int n,a[100001][5];
long long L[100001][5];
int main()
{
    int i,j;
    long long res;
    cin >> n;
    for (i=1;i<=n;i++)
        for (j=1;j<=3;j++)
        {
            cin >> a[i][j];
            L[i][j]=a[i][j];
        }
    L[1][1]=a[1][1];
    L[1][2]=a[1][2];
    L[1][3]=a[1][3];
    for (i=2;i<=n;i++)
    {
        L[i][1]=L[i][1]+max(L[i-1][2],L[i-1][3]);
        L[i][2]=L[i][2]+max(L[i-1][1],L[i-1][3]);
        L[i][3]=L[i][3]+max(L[i-1][1],L[i-1][2]);
    }
    res=max(L[n][1],L[n][2]);
    res=max(res,L[n][3]);
    cout << res;
    return 0;
}