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
    string s;
    cin >> n >> s;
    s.push_back('#');
    int ans = 0, cur = 0;
    for (int i = 0; i < n + 1; ++i)
    {
        if (s[i] == '.')
        {
            ++cur;
            if (cur == 3)
            {
                cout << 2 << endl;
                return;
            }
        }
        else
        {
            ans += cur;
            cur = 0;
        }
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