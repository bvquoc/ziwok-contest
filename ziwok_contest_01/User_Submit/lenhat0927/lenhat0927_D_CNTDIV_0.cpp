#include <bits/stdc++.h>
#define ll long long
const int Q=1e7;
using namespace std;
ll n,k,a[Q];
void nhap()
{
    //freopen("hmmm.inp","r",stdin);
    //freopen("hmmm.out","w",stdout);
    cin >> n >> k;
    ll i;
    for(i=1;i<=n;i++) cin >> a[i];
}
void kt()
{
    sort(a+1,a+n+1);
    ll i,j,g,d=0,t=0;
    for(i=1;i<=n;i++)
    {

        for(j=i;j<=n;j++)
        {
            d=0;
            for(g=a[i];g<=a[j];g++)
            {
                if(g%k==0)
                    d++;
                if(d>1) { d=d-1; break; }
            }
            if(d<2)
            t++;
        }

    }
    cout << t;

}
int main()
{
    nhap();
    kt();
    return 0;
}