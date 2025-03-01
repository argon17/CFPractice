#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <algo/debugger.h>
#else
#define debug(...) {};
#endif
#define int long long
#define endl '\n'
using namespace std;

bool isSquare(int n)
{
    int x = sqrt(n);
    return x * x == n;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    debug(a);
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
        if (isSquare(sum))
        {
            debug(i, sum);
            if (i < n - 1)
            {
                debug(a[i], a[i + 1]);
                sum += a[i + 1];
                swap(a[i], a[i + 1]);
                ++i;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
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