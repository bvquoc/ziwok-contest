#include <bits/stdc++.h>
const int Nmax=1e6+3;
using namespace std;
int n , a[Nmax],q,l,k;
void readfile()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>k;
        for(int i=1;i<=n;i++)
     {
        if(a[i]<=k)
        {
            cout<<i<<endl;
            break;
        }
      }
    }
}

int main()
{
    readfile();
    return 0;
}