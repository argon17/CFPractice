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
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    int last = min(-a[0] + b[0], a[0]);
    for (int i = 0; i < n; ++i)
    {
        debug(last);
        auto idx = lower_bound(b.begin(), b.end(), a[i] + last);
        vector<int> validNext = {};
        if (idx != b.end() && *idx >= last)
        {
            validNext.push_back(*idx - a[i]);
        }
        if (a[i] >= last)
        {
            validNext.push_back(a[i]);
        }
        if (validNext.empty())
        {
            cout << "NO" << endl;
            return;
        }
        sort(validNext.begin(), validNext.end());
        last = validNext[0];
    }
    cout << "YES" << endl;
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