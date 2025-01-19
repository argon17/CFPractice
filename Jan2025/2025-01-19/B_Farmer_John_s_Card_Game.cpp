#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <algo/debugger.h>
#else
#define debug(...) { };
#endif
#define int long long
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
        sort(a[i].begin(), a[i].end());
    }
    debug(a);
    vector<pair<int, int>> pos;
    for (int i = 0; i < n; ++i)
    {
        pos.push_back({a[i][0], i});
    }
    sort(a.begin(), a.end());
    int top = -1;
    for(int j=0; j<m; ++j){
        for(int i=0; i<n; ++i){
            if(a[i][j] < top){
                cout<<-1<<endl;
                return;
            }
            top = a[i][j];
        }
    }
    sort(pos.begin(), pos.end());
    debug(pos);
    for(int i=0; i<n; ++i){
        cout<<pos[i].second+1<<" ";
    }
    cout<<endl;
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