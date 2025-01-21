#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <algo/debugger.h>
#else
#define debug(...) {};
#endif
// #define int long long
#define endl '\n'
using namespace std;

// Required headers for ordered_set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

// Typedef for the ordered_set
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, std::less<int>,
                         __gnu_pbds::rb_tree_tag,
                         __gnu_pbds::tree_order_statistics_node_update>
    ordered_set;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end(), [&](pair<int, int> a, pair<int, int> b)
         { return a.first < b.first; });
    debug(arr);
    long long ans = 0;
    ordered_set s;
    for (int i = 0; i < n; ++i)
    {
        debug(make_pair(arr[i].second, s.order_of_key(arr[i].second)));
        ans += s.size() - s.order_of_key(arr[i].second);
        s.insert(arr[i].second);
    }
    cout << ans << endl;
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