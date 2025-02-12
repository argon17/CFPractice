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
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    while (mp.size())
    {
        auto vc = mp.begin();
        mp.erase(vc);
        int v = vc->first;
        int c = vc->second;
        if (c == 1)
        {
            cout << "No" << endl;
            return;
        }
        if (c - 2)
            mp[v + 1] += c - 2;
    }
    cout << "Yes" << endl;
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