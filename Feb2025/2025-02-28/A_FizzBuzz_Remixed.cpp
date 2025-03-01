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
    if (n % 15 == 1)
    {
        cout << ((n + 12) / 15) * 3 + 2 << endl;
    }
    else if (n % 15 == 2)
    {
        cout << ((n + 12) / 15) * 3 + 3 << endl;
    }
    else if (n % 15 == 0)
    {
        cout << ((n + 12) / 15) * 3 + 1 << endl;
    }
    else
    {
        cout << ((n + 12) / 15) * 3 << endl;
    }
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