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
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int consumed = 0;
    set<int> occurred;
    for (int i = 0; i < m; ++i)
    {
        if (occurred.find(b[i]) != occurred.end())
        {
            continue;
        }
        else if (b[i] == a[consumed])
        {
            occurred.insert(b[i]);
            consumed++;
        }
        else
        {
            cout << "TIDAK\n";
            return;
        }
    }
    cout << "YA\n";
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