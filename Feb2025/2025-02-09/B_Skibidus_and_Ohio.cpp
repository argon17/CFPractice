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
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 1; i < n; ++i)
    {
        if (s[i] == s[i - 1])
        {
            cout << "1" << endl;
            return;
        }
    }
    cout << n << endl;
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