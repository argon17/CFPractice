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
    int underscore = 0, dash = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '_')
        {
            underscore++;
        }
        else if (s[i] == '-')
        {
            dash++;
        }
    }
    cout << (dash / 2) * (dash - dash / 2) * underscore << endl;
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