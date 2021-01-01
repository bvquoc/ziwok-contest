#include <bits/stdc++.h>

using namespace std;
const int M=1e5+10;
int n,a[M][4];
long long t[M][4];
int main()
{
    int i;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i][1]>>a[i][2]>>a[i][3];
    }
    for (i=1;i<=3;i++) t[0][i]=0;
    for (i=1;i<=n;i++) t[1][i]=a[1][i];
    for (i=2;i<=n;i++)
    {
        t[i][1]=a[i][1]+max(t[i-1][2],t[i-1][3]);
        t[i][2]=a[i][2]+max(t[i-1][1],t[i-1][3]);
        t[i][3]=a[i][3]+max(t[i-1][2],t[i-1][1]);
    }

    cout<<max(t[n][1],max(t[n][2],t[n][3]));
    return 0;
}