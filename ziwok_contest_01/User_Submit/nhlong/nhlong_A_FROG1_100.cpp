#include <iostream>
#include <cmath>
using namespace std;
const int M=1e5+10;
int n,a[M];
long long t[M];
void inp()
{
    
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
}
void process()
{

    t[1]=0;
    t[2]=abs(a[1]-a[2]);
    int i=3;
    for (i=3;i<=n;i++)
    {
        t[i]=min( t[i-1]+abs(a[i-1]-a[i]),t[i-2]+abs(a[i-2]-a[i]) );
    }
    cout<<t[n];

}
int main()
{
    inp();
    process();
    return 0;
}