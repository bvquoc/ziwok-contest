#include <bits/stdc++.h>

using namespace std;
int n,a,b,c,f[100005][3];
void read()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        f[i][1]=max(f[i-1][2],f[i-1][3])+a;
        f[i][2]=max(f[i-1][1],f[i-1][3])+b;
        f[i][3]=max(f[i-1][1],f[i-1][2])+c;
    }
}

int main()
{
    read();
    cout<<max(max(f[n][1],f[n][2]),f[n][3]);
    return 0;
}