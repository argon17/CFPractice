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
    int expectedSum = (n * (n + 1)) >> 1;
    --n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> r(n);
    r[0] = a[0];
    int sum = a[0];
    map<int, int> cnt;
    cnt[a[0]]++;
    for (int i = 1; i < n; i++)
    {
        r[i] = a[i] - a[i - 1];
        sum += r[i];
        cnt[r[i]]++;
    }
    // debug(cnt);
    sort(r.begin(), r.end());
    debug(r);
    vector<int> uncommon;
    int p = 0;
    for (int i = 1; i <= n + 1; ++i)
    {
        if (cnt[i] == 0)
        {
            uncommon.push_back(i);
            cnt.erase(i);
        }
        else
        {
            cnt[i]--;
            p += cnt[i];
            if (cnt[i] == 0)
            {
                cnt.erase(i);
            }
        }
        if (uncommon.size() > 2 || p > 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    debug(uncommon);
    debug(cnt);
    if (cnt.size() == 0 && uncommon.size() == 1 && uncommon[0] + sum == expectedSum)
    {
        cout << "YES" << endl;
        return;
    }
    if ((uncommon.size() != 2) || (cnt.size() != 1) || (cnt.begin()->second != 1) || (uncommon[0] + uncommon[1] != cnt.begin()->first))
    {
        cout << "NO" << endl;
        return;
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