#include <bits/stdc++.h>
const int Nmax=1e+5;
using namespace std;
int n , a[Nmax],f[Nmax];
void readfile()
{
    int i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
}
void xuli()
{
    int i;
    f[1]=0;
    f[2]=abs(a[1]-a[2]);
    f[3]= f[1]+abs(a[1]-a[3]);
    f[3]=f[2]+abs(a[2]-a[3]);
   for(i=3;i<=n;i++)
   {
       f[i]=min(f[i-1]+abs(a[i-1]-a[i]),f[i-2]+abs(a[i-2]-a[i]));
   }
    cout<<f[n];
}
int main()
{
    readfile();
    xuli();
    return 0;
}