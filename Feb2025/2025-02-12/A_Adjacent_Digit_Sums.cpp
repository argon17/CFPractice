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
    int x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << "No" << endl;
        return;
    }
    if (x + 1 == y)
    {
        cout << "Yes" << endl;
        return;
    }
    if (((x - y) % 9) == 8)
    {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
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