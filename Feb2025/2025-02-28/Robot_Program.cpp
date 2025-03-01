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
    int n, x, k;
    cin >> n >> x >> k;
    vector<int> a(n);
    int firstZero = -1;
    int sum = 0;
    int cycleAt = -1;
    for (int i = 0; i < n; ++i)
    {
        char c;
        cin >> c;
        if (c == 'L')
            a[i] = -1;
        else
            a[i] = 1;
        x += a[i];
        if (x == 0 && firstZero == -1)
        {
            firstZero = i + 1;
        }
        sum += a[i];
        if (sum == 0 && cycleAt == -1)
        {
            cycleAt = i + 1;
        }
    }
    debug(firstZero, cycleAt);
    if (firstZero == -1)
    {
        cout << 0 << endl;
        return;
    }
    if (cycleAt == -1)
    {
        cout << 1 << endl;
        return;
    }
    if (cycleAt != -1)
    {
        cout << 1 + (k - firstZero) / cycleAt << endl;
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