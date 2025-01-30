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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<bool> isDiff(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        isDiff[i] = (a[i] != b[i]);
    }
    int m;
    cin >> m;
    map<int, int> d;
    int last;
    for (int i = 0; i < m; i++)
    {
        cin >> last;
        d[last]++;
    }
    bool possible = false;
    for (int i = 0; i < n; ++i)
    {
        if (b[i] == last)
        {
            possible = true;
            break;
        }
    }
    if (!possible)
    {
        debug(last);
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < n; ++i)
    {
        if (isDiff[i])
        {
            d[b[i]]--;
            if (d[b[i]] == -1)
            {
                debug(d);
                cout << "NO" << endl;
                return;
            }
        }
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