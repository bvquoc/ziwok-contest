#include <bits/stdc++.h>

using namespace std;
int n,k,a[100005],f[100005];
void read()
{
    cin>>n>>k;
    for(int i=0;i<=n-1;i++) cin>>a[i];
}

void xuli()
{
    for (int i=n-2; i>=0; i--)
    {
        f[i]=f[i+1]+abs(a[i]-a[i+1]);
        for (int j=2; j<=k && i+j<n; j++)
        f[i]=min(f[i],f[i+j]+abs(a[i]-a[i+j]));
    }
  cout << f[0];
}


int main()
{
    read();
    xuli();
    return 0;
}