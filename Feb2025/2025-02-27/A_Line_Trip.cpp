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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int mx = 2 * (x - a.back());
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            mx = max(mx, a[i]);
        else
            mx = max(mx, a[i] - a[i - 1]);
    }
    cout << mx << endl;
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