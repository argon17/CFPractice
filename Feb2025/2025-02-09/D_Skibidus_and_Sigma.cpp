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
    map<int, int> sum;
    vector<pair<int, vector<int>>> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i].second.resize(m);
        a[i].first = i;
        for (int j = 0; j < m; j++)
        {
            cin >> a[i].second[j];
            sum[i] += a[i].second[j];
        }
    }
    sort(a.begin(), a.end(), [&](auto &x, auto &y)
         { return sum[x.first] > sum[y.first]; });
    for (int i = 0; i < n; i++)
    {
        debug(a[i].second);
    }
    vector<int> final(n * m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            final[i * m + j] = a[i].second[j];
        }
    }
    int ans = 0;
    int cnt = n * m;
    for (int i = 0; i < n * m; i++)
    {
        ans += cnt * final[i];
        --cnt;
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