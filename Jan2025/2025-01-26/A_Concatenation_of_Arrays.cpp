#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <algo/debugger.h>
#else
#define debug(...) { };
#endif
#define int long long
#define endl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        cin >> a[i].second;
    }
    sort(a.begin(), a.end(), [&](pair<int, int> x, pair<int, int> y) {
        if(max(x.first, x.second) == max(y.first, y.second))
        {
            return (min(x.first, x.second) < min(y.first, y.second));
        }
        return (max(x.first, x.second) < max(y.first, y.second));
    });
    for(int i = 0; i < n; i++)
    {
        cout << a[i].first << " " << a[i].second << " ";
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