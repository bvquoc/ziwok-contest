#include <bits/stdc++.h>

using namespace std;
int f[100009][4],n,a[100009][4],b[100009],vt,res,c[100009],bien;
int main()
{
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i][1]>>a[i][2]>>a[i][3];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=3;j++)
    {
        if (j==1)
        {
            if (f[i-1][2]>f[i-1][3])
                res=f[i-1][2];
            else
                res=f[i-1][3];
            f[i][j]=res+a[i][j];
        }
        else
        {
            if (j==2)
            {
                if (f[i-1][1]>f[i-1][3])
                    res=f[i-1][1];
                else
                    res=f[i-1][3];
                f[i][j]=res+a[i][j];
            }
            else
            {
                if (f[i-1][2]>f[i-1][1])
                    res=f[i-1][2];
                else
                    res=f[i-1][1];
                f[i][j]=res+a[i][j];
            }
        }
    }
    bien=max(f[n][1],f[n][2]);
    bien=max(f[n][3],bien);
    cout<<bien;
    return 0;
}