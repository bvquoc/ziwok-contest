#include <iostream>

using namespace std;
long long n,k,a[300003],vt[300003],dem;
int main()
{
    long long i,j=0,dem=0;
    bool ok;
    cin >> n >> k;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        if (a[i]%k==0)
            j++,vt[j]=i;
    }
    vt[j+1]=1e6;
    j=1;
    for (i=1;i<=n;i++)
    {
        if (i<vt[2])
            dem=dem+i;
        else
        {
            if (i==vt[j+1])
                j++;
            dem=dem+i-vt[j-1];
        }
    }
    cout << dem;
    return 0;
}