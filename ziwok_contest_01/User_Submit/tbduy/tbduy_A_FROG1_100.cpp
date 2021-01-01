#include <bits/stdc++.h>

using namespace std;
int n,a[100005],f[100005];
void read()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
}

void xuli()
{
    f[1]=0;
    f[2]=abs(a[2]-a[1]);
    f[3]=min(abs(a[3]-a[1]),f[2]+abs(a[3]-a[2]));
    for(int i=4;i<=n;i++)
    {
        f[i]=min(f[i-1]+abs(a[i]-a[i-1]),f[i-2]+abs(a[i]-a[i-2]));
    }
    cout<<f[n];
}

int main()
{
    read();
    xuli();
    return 0;
}