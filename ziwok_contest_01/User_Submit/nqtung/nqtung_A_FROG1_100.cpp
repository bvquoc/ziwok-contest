#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
int n,h[100005],f[100005];
int main()
{
    cin>>n;
    FOR(i,1,n) cin>>h[i];
    f[1]=0; f[2]=abs(h[1]-h[2]);
    FOR(i,3,n)
    {
        f[i]=min(f[i-1]+abs(h[i]-h[i-1]),f[i-2]+abs(h[i-2]-h[i]));
    }
    cout<<f[n];
    return 0;
}