#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    cout << "1 1 ";
    for (int i = 0; i < n - 3; ++i)
    {
        cout << i + 2 << " ";
    }
    cout << "1" << endl;
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