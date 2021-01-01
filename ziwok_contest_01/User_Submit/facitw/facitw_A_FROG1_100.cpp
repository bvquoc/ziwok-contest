#include <bits/stdc++.h>
const int Nmax=1e5+5;
using namespace std;
int n,a[Nmax],F[Nmax];
int main()
{
    int i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    F[1]=0;
    F[2]=abs(a[2]-a[1]);
    for(i=3;i<=n;i++)
    {
        F[i]=min(F[i-1]+abs(a[i-1]-a[i]),F[i-2]+abs(a[i-2]-a[i]));
    }
    cout<<F[n];
    return 0;
}