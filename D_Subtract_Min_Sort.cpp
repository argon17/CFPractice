#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <algo/debugger.h>
#endif
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int k = 0;
    while (a[k] == a[0] && k < n)
    {
        k++;
    }
    if (k > n - 1)
    {
        cout << "YES" << endl;
        return;
    }
    if (a[k] < a[0])
    {
        cout << "NO" << endl;
        return;
    }
    int last = a[1] - a[0];

    for (int i = 2; i < n; ++i)
    {
        if (a[i] < last)
        {
            cout << "NO\n";
            return;
        }
        last = a[i] - last;
    }
    cout << "YES" << endl;
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