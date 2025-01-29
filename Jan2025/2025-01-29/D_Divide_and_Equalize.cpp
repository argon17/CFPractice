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
    vector<int> a(n);
    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        for (int p = 2; p * p <= a[i]; p++)
        {
            while (a[i] % p == 0)
            {
                cnt[p]++;
                a[i] /= p;
            }
        }
        if (a[i] > 1)
        {
            cnt[a[i]]++;
        }
    }
    // debug(a);
    debug(cnt);
    for (auto x : cnt)
    {
        if (x.second % n != 0)
        {
            cout << "NO" << endl;
            return;
        }
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