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
    int n, x;
    cin >> n >> x;
    int cnt1R = 0;
    for (int i = 0; i < 31; ++i)
    {
        if ((1 << i) & x)
        {
            cnt1R++;
        }
        else
        {
            break;
        }
    }
    debug(cnt1R);
    int mx = min((1ll << cnt1R), n - 1);
    int k = 0;
    for (int i = 0; i < mx; ++i)
    {
        cout << i << " ";
        k |= i;
    }
    if (mx == n - 1 && ((k | mx) == x))
    {
        cout << mx << " ";
        cout<<endl;
        return;
    }
    for (int i = 0; i < n - mx; ++i)
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