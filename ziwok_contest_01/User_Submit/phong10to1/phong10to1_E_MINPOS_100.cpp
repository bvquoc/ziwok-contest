#include <bits/stdc++.h>

using namespace std;
long long n,q,a[1000001],vt[1000001];
struct pos
{
    long long p,vt;
};
pos k[1000001];
bool sosanh(pos a, pos b)
{
    return (a.p>b.p);
}
int main()
{
    long long i,j,d=1;
    cin >> n;
    for (i=1;i<=n;i++)
        cin >> a[i];
    cin >> q;
    for (i=1;i<=q;i++)
    {
        cin >> k[i].p;
        k[i].vt=i;
    }
    sort(k+1,k+1+q,sosanh);
    for (i=1;i<=q;i++)
    {
        for (j=d;j<=n;j++)
        {
            if (a[j]<=k[i].p)
            {
                vt[k[i].vt]=j;
                d=j;
                break;
            }
        }
    }
    for (i=1;i<=q;i++)
        cout << vt[i] << endl;
    return 0;
}