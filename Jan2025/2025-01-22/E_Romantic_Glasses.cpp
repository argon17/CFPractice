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
    set<int> s;
    bool ans = false;
    int cur = 0;
    for (int i = 0; i < n; ++i)
    {
        s.insert(cur);
        int x;
        cin >> x;
        if (i & 1)
            x *= -1;
        cur += x;
        if (s.find(cur) != s.end())
        {
            ans = true;
        }
    }
    cout << (ans ? "YES" : "NO") << endl;
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