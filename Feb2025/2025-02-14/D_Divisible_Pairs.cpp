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
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    map<pair<int, int>, int> mp;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        ans += mp[{(x - a[i] % x) % x, a[i] % y}];
        mp[{a[i] % x, a[i] % y}]++;
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