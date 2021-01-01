#include <bits/stdc++.h>

using namespace std;
int n;
const int M=1e5*3+10;
long long a[M],k;
int t[M],S=0;
void inp()
{
    cin>>n>>k;
    memset(t,0,sizeof(t));
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]%k==0) t[i]=1;
    }
}
void basis()
{
    int i;
    for (i=1;i<=n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    for (i=1;i<=n;i++)
    {
        cout<<t[i]<<"\t";
    }
}
void process()
{
    int i,j;

    for (i=1;i<=n;i++)
    {
        int s=1,tong=t[i];
        for (j=i+1;j<=n;j++)
        {
            if (tong+t[j]<=1)
            {
                s++;
                tong=tong+t[j];
            }
            else break;
        }
        S=S+s;
    }
    cout<<S;
}

int main()
{
    inp();
    process();
    return 0;
}