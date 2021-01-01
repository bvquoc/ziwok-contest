#include <bits/stdc++.h>
using namespace std;

int n,s;
int a[1010];
long t[110][20010];
void inp()
{
    int i;
    cin>>s>>n;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
}
void basis()
{
    memset(t,0,sizeof(0));
    int i;
    for (i=1;i<=2*s;i++)
    {
        t[0][i]=1e12;
    }

}
void process()
{
    int i,j;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=2*s;j++)
        {
            if (j<a[i])
            {
                t[i][j]=t[i-1][j];
            }
            else
            {
                t[i][j]=min( t[i-1][j], t[i][j-a[i]]+1 );
            }
        }
    }
}
void res()
{
    int i,j;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=2*s;j++)
        {
            cout<<t[i][j]<<"\t";
        }
        cout<<endl;
    }
}
///
void res2()
{
    int i,Min=t[n][s];
    for (i=s;i<=s+s;i++)
    {
        //Min=min(Min,t[n][i]);
        if (t[n][i]+t[n][i-s]<Min) Min=t[n][i]+t[n][i-s];
    }
    cout<<Min;
}
int main()
{
    inp();
    basis();
    process();
    res2();
    return 0;
}