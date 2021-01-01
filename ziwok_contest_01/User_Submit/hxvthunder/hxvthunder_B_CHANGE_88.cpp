#include <bits/stdc++.h>
using namespace std;

int n,s;
int a[1010];
long t[210][10010];
void inp()
{
    int i;
    cin>>s>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
}
void basis()
{
    memset(t,0,sizeof(0));
    int i;
    for (i=1;i<=s;i++)
    {
        t[0][i]=1e12;
    }
    
}
void process()
{
    int i,j;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=s;j++)
        {
            if (j<a[i]) t[i][j]=t[i-1][j];
            else t[i][j]=min( t[i-1][j], t[i][j-a[i]]+1 );
        }
    }
}
int main()
{
    inp();
    basis();
    process();
    cout<<t[n][s];
    return 0;
}