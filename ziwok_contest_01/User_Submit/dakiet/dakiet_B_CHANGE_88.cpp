#include<iostream>
#define ll long long
using namespace std;

ll a[100001];
ll l[100001];
int chan(ll a[],ll n,ll S)
{
    ll i,j;
    for (i=0;i<=S;i++)
        l[i]=0;
    for (i=0;i<n;i++)
        l[a[i]]=1;
	for (i=1;i<=S;i++)
	    for (j=0;j<n;j++)
	        if (i>=a[j])
                {
                if ((l[i]>l[i-a[j]]+1&&l[i-a[j]]!=0)||(l[i]==0&&l[i-a[j]]!= 0))
                {
                    l[i]=l[i-a[j]]+1;
                }
	        }
	return l[S];
}
int main(){
	ll n,S,i;
    cin>>S>>n;
	for (i=0;i<n;i++)
    {
		cin>>a[i];
	}
	cout<<chan(a,n,S);
	return 0;
}