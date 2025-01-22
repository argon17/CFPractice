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
    if (n & 1 && n < 27)
    {
        cout << -1 << endl;
        return;
    }
    if (!(n & 1))
    {
        for (int i = 0; i < n; i += 2)
        {
            cout << i + 1 << " " << i + 1 << " ";
        }
    }
    else
    {
        //                 0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
        vector<int> ans = {2, 1, 3, 3, 2, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 1, 10, 10, 11, 11, 12, 12, 13, 13, 1};
        for (int i = 0; i < 27; ++i)
        {
            cout << ans[i] << " ";
        }
        for (int i = 27; i < n; i += 2)
        {
            cout << i << " " << i << " ";
        }
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