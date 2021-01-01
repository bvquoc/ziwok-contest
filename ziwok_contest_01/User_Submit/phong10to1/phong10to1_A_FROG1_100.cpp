#include <bits/stdc++.h>

using namespace std;
int n,a[100005];
int main()
{
    int i,j;
    long long L[100005];
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    L[1]=0,L[2]=abs(a[2]-a[1]);
    for (i=3;i<=n;i++)
        L[i]=min(L[i-1]+abs(a[i]-a[i-1]),L[i-2]+abs(a[i]-a[i-2]));
    cout << L[n];
    return 0;
}