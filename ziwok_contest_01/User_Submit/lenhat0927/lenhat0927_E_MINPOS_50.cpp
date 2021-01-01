#include <bits/stdc++.h>
#define ll long long
const int Q=1e6;
using namespace std;
ll b[Q],n,q;
struct mang
{
    ll t,cs;
};
mang a[Q];
void nhap()
{
    //freopen("hmm.inp","r",stdin);
    //freopen("hmm.out","w",stdout);
    cin >> n;
    ll i,j;
    for(i=1;i<=n;i++)
    {
        cin >> a[i].t;
        a[i].cs=i;
    }
    cin >> q;
    for(j=1;j<=q;j++)
    {
        cin >> b[j];
    }
}
void kt()
{
    //sort(a+1,a+n+1);
    ll i,j,Min=1e9,d;
    for(j=1;j<=q;j++)
    {
        for(i=1;i<=n;i++)
        {
            if(a[i].t<=b[j])
            {
                cout << a[i].cs << endl;
                //Min=min(Min,a[i].t);
                break;
            }
        }
    }
}
int main()
{
    nhap();
    kt();
    return 0;
}