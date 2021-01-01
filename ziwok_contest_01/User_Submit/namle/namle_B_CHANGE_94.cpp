#include <bits/stdc++.h>

using namespace std;

int a[3009],x,n,l[100009],p[100009];
int main()
{
    cin>>x>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    for (int i=1;i<=n;i++)
    {
        l[a[i]]=1;
        p[a[i]]=1;
    }
    for (int i=n+1;i<=2*n;i++)
        a[i]=-a[i-n];
    n*=2;
    sort(a+1,a+1+n);
    for (int i=1;i<=x;i++)
        for (int j=1;j<=n;j++)
            if (i>=a[j])
                if ((l[i-a[j]]!=0 && l[i]==0) || (l[i-a[j]]!=0 && l[i]>l[i-a[j]]+1))
                    l[i]=l[i-a[j]]+1;
    for (int i=x*3;i>=1;i--)
        for (int j=1;j<=n;j++)
            if (i>=a[j])
                if ((p[i-a[j]]!=0 && p[i]==0) || (p[i-a[j]]!=0 && p[i]>p[i-a[j]]+1))
                    p[i]=p[i-a[j]]+1;
    if (p[x]==0)
        cout<<l[x];
    else {
        if (l[x]==0)
            cout<<p[x];
        else cout<<min(l[x],p[x]);
    }
	return 0;
}