#include <bits/stdc++.h>
using namespace std;
int n, a[100001], S, tg, mx=0;
bool flag=true;
int main()
{
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    cin >> S;
    for (int i=1; i<=n; i++) for (int j=1; j<=n-i+1; j++)
    {
        tg=0;
        for (int k=j; k<=j+i-1; k++) tg+=a[k];
        if (tg==S) {flag=false; mx=max(mx, i);}
    }
    if (flag) cout << -1; else cout << mx;
    return 0;
}