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
    vector<int> a(n), b(n);
    vector<pair<int, int>> d;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        d.push_back({a[i] - b[i], i + 1});
    }
    sort(d.begin(), d.end());
    vector<int> ans;
    int mx = d[n - 1].first;
    int cur = n - 1;
    while (cur >= 0 && d[cur].first == mx)
    {
        ans.push_back(d[cur].second);
        cur--;
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
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