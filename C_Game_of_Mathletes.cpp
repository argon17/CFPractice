#include <bits/stdc++.h>
// #include <algo/debugger.h>
#define int long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] + a[r] == k)
        {
            ans++;
            l++;
            r--;
        }
        else if (a[l] + a[r] < k)
        {
            l++;
        }
        else
        {
            r--;
        }
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