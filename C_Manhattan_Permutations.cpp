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
    int n, k;
    cin >> n >> k;
    int mxPossible = 0;
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    reverse(a.begin(), a.end());
    // debug(a);
    for (int i = 0; i < n; ++i)
        mxPossible += abs(a[i] - i - 1);
    if ((k & 1) || (mxPossible < k))
    {
        debug(k);
        debug(make_pair(k, mxPossible));
        cout << "NO" << endl;
        return;
    }
    reverse(a.begin(), a.end());
    int l = 0, r = n - 1;
    while (k)
    {
        if (k >= ((r - l) << 1))
        {
            swap(a[l], a[r]);
            k -= (r - l) << 1;
            ++l;
            --r;
        }
        else
        {
            ++l;
        }
    }
    debug(a);
    cout << "YES" << endl;
    for (auto x : a)
        cout << x << " ";
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