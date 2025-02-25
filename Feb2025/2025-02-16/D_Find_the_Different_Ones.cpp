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
    vector<int> nex(n);
    for (int &x : a)
    {
        cin >> x;
    }
    nex[n - 1] = n;
    int last = n;
    for (int i = n - 2; i >= 0; --i)
    {
        if (a[i] == a[i + 1])
        {
            nex[i] = last;
        }
        else
        {
            last = i + 1;
            nex[i] = last;
        }
    }
    debug(nex);
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (nex[l - 1] == nex[r - 1])
        {
            cout << "-1 -1\n";
        }
        else
        {
            cout << l << " " << nex[l - 1] + 1 << endl;
        }
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