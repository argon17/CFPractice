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
    for (int k = 2; k <= n; ++k)
    {
        for (int m = 3; m <= n; ++m)
        {
            if ((n * (k - 1)) == (pow(k, m) - 1))
            {
                debug(k, m);
                debug(n);
                cout << "YES" << endl;
                return;
            }
            int sum = pow(k, m) - 1;
            sum /= (k - 1);
            if (sum > n)
            {
                break;
            }
        }
    }
    cout << "NO" << endl;
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