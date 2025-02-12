#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <algo/debugger.h>
#else
#define debug(...) {};
#endif
#define int long long
#define endl '\n'
using namespace std;

bool check(int n)
{
    while (n)
    {
        if (n % 10 == 7)
            return true;
        n /= 10;
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> toadd;
    int start = 9;
    for (int i = 0; i < 10; ++i)
    {
        toadd.push_back(start);
        start = start * 10 + 9;
    }
    debug(toadd);
    int ans = 20;
    for (int x : toadd)
    {
        int nn = n;
        int step = 0;
        while (not check(nn))
        {
            nn += x;
            step++;
        }
        ans = min(ans, step);
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