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
    vector<int> a(n);
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        odd += a[i] & 1;
    }
    if (odd && odd != n)
    {
        cout << -1 << endl
             << endl;
        return;
    }
    vector<int> ans;
    for (int i = 29; i >= (odd ? 0 : 1); --i)
    {
        ans.push_back(1 << i);
    }
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