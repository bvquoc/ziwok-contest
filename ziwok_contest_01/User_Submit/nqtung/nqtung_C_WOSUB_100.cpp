#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
int n,a[100005],f[100005],s;
int Find1(int x)
{
    int d=1,c=n,g,ans;
    while (d<=c)
    {
        g=(d+c)/2;
        if (f[g]>=x) c=g-1,ans=g;
        else d=g+1;
    }
    return ans;
}

int main()
{
    cin>>n;
    FOR(i,1,n)
    {
        cin>>a[i];
        f[i]=f[i-1]+a[i];
    }
    cin>>s; int x=Find1(s), ans=0;

    bool check=false;

    FOR(j,x,n)
    {
    int d=1,c=j,g;
    while (d<=c)
    {
        g=(d+c)/2;
        if (f[j]-f[g-1]==s) {ans=max(ans,j-g+1); check=true; break;}
        else
        if (f[j]-f[g-1]>s) d=g+1;
        else c=g-1;
    }
    }
    if (check==true) cout<<ans; else cout<<-1;

    return 0;
}