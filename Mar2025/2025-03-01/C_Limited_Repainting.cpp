#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <algo/debugger.h>
#else
#define debug(...) {};
#endif
#define int long long
#define endl '\n'
using namespace std;

bool possible(string s, vector<int> penalty, int k, int m)
{
    char last = 'R';
    int ops = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (penalty[i] > m)
        {
            if (s[i] == 'B' && s[i] != last)
            {
                ++ops;
            }
            last = s[i];
        }
    }
    return ops <= k;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    vector<int> penalty(n);
    cin >> s;
    for (int i = 0; i < n; ++i)
    {
        cin >> penalty[i];
    }
    int l = 0, r = 1e9;
    while (l < r)
    {
        int m = (l + r) >> 1;
        if (possible(s, penalty, k, m))
        {
            r = m;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << l << endl;
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