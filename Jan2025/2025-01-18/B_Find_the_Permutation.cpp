#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string g[n];
    for (int i = 0; i < n; i++)
    {
        cin >> g[i];
    }
    vector<int> ans(n);
    iota(ans.begin(), ans.end(), 0);
    sort(ans.begin(), ans.end(), [&](int i, int j)
         { 
            if(g[i][j] == '1') return i < j;
            else return i > j; });
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] + 1 << " ";
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