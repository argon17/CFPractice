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
    if ((n & (n - 1)) == 0)
    {
        cout << 1 << endl;
        cout << n << endl;
        return;
    }
    vector<int> ans;
    for (int b = 63; b >= 0; --b)
    {
        if ((n & (1ll << b)) == (1ll << b))
        {
            debug(b);
            ans.push_back(n ^ (1ll << b));
        }
    }
    ans.push_back(n);
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