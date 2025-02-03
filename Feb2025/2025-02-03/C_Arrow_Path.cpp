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
    string s[2];
    cin >> s[0] >> s[1];
    vector<vector<bool>> possible(2, vector<bool>(n, false));
    possible[0][0] = 1;
    possible[1][0] = 1;
    for (int col = 1; col < n; ++col)
    {
        for (int row = 0; row < 2; ++row)
        {
            if (possible[row][col - 1] && s[1 ^ row][col - 1] == '>')
                possible[1 ^ row][col] = 1;
            if (col > 1 && possible[row][col - 2] && s[row][col - 1] == '>')
                possible[row][col] = 1;
        }
    }
    cout << (possible[1][n - 1] ? "YES" : "NO") << endl;
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