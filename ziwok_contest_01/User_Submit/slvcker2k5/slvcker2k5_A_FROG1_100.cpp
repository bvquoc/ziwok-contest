#include <bits/stdc++.h>
using namespace std;
const int Nmax=1e6+6;
int n,h[Nmax],f[Nmax];
void nhap()
{
    cin>>n;
    for (int i=1; i<=n; i++) cin>>h[i];
}
void xuli()
{
    int i;
    f[1]=0;
    f[2]=abs(h[1]-h[2]);
    for (i=3; i<=n; i++)
    {
        f[i]=min(f[i-1]+abs(h[i-1]-h[i]),f[i-2]+abs(h[i-2]-h[i]));
    }
    cout<<f[n];
}
int main()
{
    nhap();
    xuli();
    return 0;
}