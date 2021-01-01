#include <bits/stdc++.h>

using namespace std;
int s,n,a[100005],k[10000][10000];
void read()
{
    cin>>s>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[n+i]=-a[i];
    }
}

void xuli()
{
    for(int i=0;i<=max(s,n*2);i++)
    {
        k[i][0]=0;
        k[0][i]=3e9;
    }
   for(int i=1;i<=2*n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            if(j>=a[i])
                k[i][j]=min(k[i-1][j],k[i][j-a[i]]+1);
            else k[i][j]=k[i-1][j];
        }
    }
    cout<<k[n][s]<<endl;
}

int main()
{
    read();
    xuli();
    return 0;
}