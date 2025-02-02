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
    if (1 ^ (n & 1))
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vector<int> a(n);
    for (int i = 1; i <= n; i++)
    {
        a[i - 1] = i;
    }
    debug(a);
    int start = (n + 1) / 2 * 3;
    vector<pair<int, int>> ans;
    int ind = 0;
    for (int i = 0; i < n; ++i)
    {
        int first = a[ind];
        int second = start - first;
        ind += 2;
        ind %= n;
        ans.push_back({first, second});
        ++start;
    }
    debug(ans);
    for (auto [x, y] : ans)
    {
        cout << x << " " << y << endl;
    }
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