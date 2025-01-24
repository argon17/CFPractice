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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n & 1)
    {
        int ans = 1e18;
        for (int i = 0; i < n; ++i)
        {
            int cur = 1;
            for (int j = 0; j < n;)
            {
                if (i == j)
                {
                    j++;
                    continue;
                }
                else if (i == j + 1)
                {
                    cur = max(cur, v[j + 2] - v[j]);
                    j += 3;
                    continue;
                }
                else
                {
                    cur = max(cur, v[j + 1] - v[j]);
                    j += 2;
                }
            }
            ans = min(ans, cur);
        }
        cout << ans << endl;
    }
    else
    {
        int ans = 0;
        for (int i = 0; i < n;)
        {
            ans = max(ans, v[i + 1] - v[i]);
            i += 2;
        }
        cout << ans << endl;
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