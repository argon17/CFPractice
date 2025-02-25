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
    vector<pair<int, int>> a;
    int cur = 0;
    for (int i = 1; i < 500; ++i)
    {
        cur += i;
        a.push_back({cur, i + 1});
    }
    // debug(a);
    int nn = n;
    // vector<pair<int, int>> ans;
    map<pair<int, int>, int> ans;
    int id = 480;
    while (nn && id >= 0)
    {
        if (a[id].first <= nn)
        {
            int times = (nn / a[id].first);
            nn -= a[id].first * times;
            ans[a[id]] += times;
        }
        else
        {
            id--;
        }
    }
    debug(ans);
    int curx = 0, cury = 0;
    vector<pair<int, int>> fans;
    bool addx = true;
    fans.push_back({curx, cury});
    for (auto x : ans)
    {
        for (int i = 0; i < x.second; ++i)
        {
            for (int j = 0; j < x.first.second - 1; ++j)
            {
                if (addx)
                {
                    curx++;
                }
                else
                {
                    cury++;
                }
                fans.push_back({curx, cury});
            }
            addx = !addx;
        }
    }
    debug(fans);
    cout << fans.size() << endl;
    for (auto x : fans)
    {
        cout << x.first << " " << x.second << endl;
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