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
    int n, k, p;
    cin >> n >> k >> p;
    int mn = -p * n;
    int mx = p * n;
    if (k < mn || k > mx)
    {
        cout << -1 << endl;
        return;
    }
    k *= (k < 0) ? -1 : 1;
    cout << (k + p - 1) / p << endl;
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