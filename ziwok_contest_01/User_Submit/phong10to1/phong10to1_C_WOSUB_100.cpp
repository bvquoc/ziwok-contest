#include <iostream>

using namespace std;
int a[100001];
long long n,s;
int main()
{
    long long i,L[100001],d,c,mid,res,Max=0;
    cin >> n;
    L[0]=0;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        L[i]=a[i]+L[i-1];
    }
    cin >> s;
    for (i=1;i<=n;i++)
    {
        if (L[i]>s)
        {
            res=0;
            d=1,c=i-1;
            while (d<=c)
            {
                mid=(d+c)/2;
                if (L[mid]==L[i]-s)
                {
                    res=i-mid;
                    break;
                }
                if (L[mid]>L[i]-s) c=mid-1;
                if (L[mid]<L[i]-s) d=mid+1;
            }
            Max=max(Max,res);
        }
    }
    if (Max!=0)
        cout << Max;
    else
        cout << "-1";
    return 0;
}