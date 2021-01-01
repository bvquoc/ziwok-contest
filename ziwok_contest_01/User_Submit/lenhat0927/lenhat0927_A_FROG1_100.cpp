#include <bits/stdc++.h>
#define ll long long
const int Q=3e6;
using namespace std;
ll n,a[Q],f[Q];
void nhap()
{
    cin >> n;
    ll i;
    for(i=1;i<=n;i++)
    cin >> a[i];
}
void kt()
{
    ll i;
    f[1]=0;
    f[2]=abs(a[1]-a[2]);
    for(i=3;i<=n;i++)
    {
        f[i]=min(f[i-1]+abs(a[i-1]-a[i]),f[i-2]+abs(a[i-2]-a[i]));
    }
    cout << f[n];
}
int main()
{
    nhap();
    kt();
    return 0;
}