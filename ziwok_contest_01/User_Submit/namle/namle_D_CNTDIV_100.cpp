#include<bits/stdc++.h>

using namespace std;
int k,a[300009],b[300009],n,dem=0,h,s,vt1,vt2,bien,x=0,maxc=0,m;

int main()
{
    cin>>n>>k;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]%k==0)
            dem++;
        b[i]=dem;
    }
    s=n;
    for (int i=1;i<=n;i++)
    {
        x=b[i];
        if (b[i]-b[i-1]==0)
        {
            vt1=lower_bound(b+1,b+1+n,x+2)-b;
            if (vt1>n)
                vt1=n;
            if (b[vt1]==x+2)
                vt1--;
            h=vt1-i;
            s=s+h;
        }
        else
        {
            vt1=lower_bound(b+1,b+1+n,x+1)-b;
            if (vt1>n)
                vt1=n;
            if (b[vt1]==x+1)
                vt1--;
            h=vt1-i;
            s=s+h;
        }
    }
    cout<<s;
    return 0;
}