#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <algo/debugger.h>
#else
#define debug(...) {};
#endif
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int mn = abs(n - m), mx = max(n, m);
    debug(mn, mx);
    if ((k < mn) || (k > mx))
    {
        cout << -1 << endl;
        return;
    }
    int pair = min(n,m);
    pair -= (k - mn);
    debug(pair);
    debug(n, m);
    string res = "";
    for (int i = 0; i < pair; ++i)
    {
        res += (n-pair) ? "01" : "10";
    }
    for (int i = 0; i < n - pair; ++i)
    {
        res += '0';
    }
    for (int i = 0; i < m - pair; ++i)
    {
        res += '1';
    }
    cout << res << endl;
}

int32_t main()
{
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}