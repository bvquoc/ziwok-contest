/* Author: Bui Vi Quoc */
#include <bits/stdc++.h>
#define FastIO ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define FOR(i, a, b) for (int i = (a), _b = (b); i <= _b; i++)
#define FORD(i, b, a) for (int i = (b), _a = (a); i >= _a; i--)
#define REP(i, n) for (int i = 0, _n = (n); i < _n; i++)
#define FORE(i, v) for (__typeof((v).begin()) i = (v).begin(); i != (v).end(); i++)
#define ALL(v) (v).begin(), (v).end()
#define sz(a) (signed(a.size()))
#define BIT(a, i) (((a) >> (i)) & 1LL)
#define MASK(i) (1LL << (i))
#define turnON(a, i) ((a) | MASK(i))
#define turnOFF(a, i) ((a) & (~MASK(i)))
#define flipBit(n, bit) ((n) ^ (1LL << (bit)))
#define cntBit(n) __builtin_popcountll(n)
#define endl '\n'
// #define int long long
using namespace std;

template<class T> T Abs(const T &x) { return (x < 0 ? -x : x); }
template<class X, class Y>
bool minimize(X &x, const Y &y) {
    X eps = 1e-9;
    if (x > y + eps) {
        x = y;
        return true;
    }
    return false;
}
template<class X, class Y>
bool maximize(X &x, const Y &y) {
    X eps = 1e-9;
    if (x + eps < y) {
        x = y;
        return true;
    }
    return false;
}

using ii = pair <int, int>;
using ll = long long;
using ld = long double;

const int N = 1000006;
int n, a[N], f[N];
int q, k;

/*
(\_/)
( •_•)
/ >?? */

int query(int k) {
    int l = 1, r = n, pos = -1;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (f[mid] <= k) pos = mid, r = mid - 1;
        else l = mid + 1;
    }
    return pos;
}

#define FILE_IO
signed main(void) {
    FastIO;
    #ifdef FILE_IO
    freopen("MINPOS.INP","r",stdin);
    freopen("MINPOS.OUT","w",stdout);
    #endif
    
    cin >> n;
    FOR(i,1,n) cin >> a[i];
    f[1] = a[1];
    FOR(i,2,n) f[i] = min(a[i], f[i-1]);

    cin >> q;
    while (q--) {
        cin >> k;
        cout << query(k) << endl;
    }

    // cerr << "\nExecution time: " << (double) clock() / 1000.0 << " second(s).";
    return 0;
}