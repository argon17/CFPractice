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
    int n;
    cin >> n;
    map<int, int> b;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        for (int k = x; k <= n; k += x)
            b[k]++;
    }
    int ans = 0;
    for (auto i : b)
    {
        ans = max(ans, i.second);
    }
    cout << ans << endl;
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