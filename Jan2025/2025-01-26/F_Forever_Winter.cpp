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
    int n, m;
    cin >> n >> m;
    map<int, int> cnt;
    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;
        cnt[x]++;
        cnt[y]++;
    }
    map<int, int> occ;
    for (auto x : cnt)
    {
        occ[x.second]++;
    }
    debug(occ);
    int x = -1, y = -1;
    for (auto p : occ)
    {
        if (p.first == 1)
        {
            continue;
        }
        if (p.second == 1)
        {
            x = p.first;
        }
        else
        {
            y = p.first - 1;
        }
    }
    if (x == -1)
    {
        x = y + 1;
    }
    cout << x << " " << y << endl;
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