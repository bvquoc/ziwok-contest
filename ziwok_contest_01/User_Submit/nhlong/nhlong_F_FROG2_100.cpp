#include <bits/stdc++.h>

using namespace std;
const int M=1e5+10;
int n,k,a[M];
long long t[M];
void inp()
{
    cin>>n>>k;
    for (int i=1;i<=n;i++) cin>>a[i];
}
void basis()
{
    int i;
    for (i=1;i<=k;i++)
    {
        t[i]= abs( a[i]-a[1] );
    }
}
void process()
{
    int i,j;
    for (i=k+1;i<=n;i++)
    {
        long long Min=1e10;
        for (j=i-k;j<i;j++)
        {
            //if (Min>t[i-j]+abs( a[i]-a[j] )) Min=t[i-j]+abs( a[i]-a[j] );
          Min=min(Min,t[j]+abs( a[i]-a[j] ));
        }
        t[i]=Min;
    }
    cout<<t[n];
}
int main()
{
    inp();
    basis();
    process();
    return 0;
}