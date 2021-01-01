#include <bits/stdc++.h>

using namespace std;
int n,k,t,a[1000000],d[1000000],s[1000000];
void nhap()
{
    cin>>n>>k;
    memset(d,0,sizeof(d));
    s[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%k==0) d[i]=1;
    }
}

void xl()
{
    int i=1,dem,res=0,k=0,j;
    while(i<=n)
    {
        dem=0;
        j=i;
        while(j<=n)
        {
            if(d[j]==1) dem++;
            j++;
            if(dem>1)
            {
                k=j;
                break;
            }
            else
            if(dem==1 && j>n) k=j+1;
        }
        res=res+k-1-i;
        i++;
    }
    cout<<res;
}

int main()
{
    nhap();
    xl();
    return 0;
}