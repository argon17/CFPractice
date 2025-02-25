#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <algo/debugger.h>
#else
#define debug(...) {};
#endif
#define int long long
#define endl '\n'
using namespace std;

void checkPattern()
{
    vector<vector<int>> a(1000);
    for (int i = 0; i < 1000; ++i)
    {
        a[i].resize(i + 1);
        a[i][0] = 1;
        for (int j = 1; j <= i; ++j)
        {
            a[i][j] = a[i - 1][j] ^ a[i - 1][j - 1];
        }
    }
    for (int i = 0; i < 1000; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int k;

vector<int> findPattern(int n)
{
    if (n == 1)
        return vector<int>{k};
    int lastPowerOfTwo = 1 << (31 - __builtin_clz(n - 1));
    vector<int> partial = findPattern(n - lastPowerOfTwo);
    vector<int> res(lastPowerOfTwo, 0);
    for (int i = 0; i < partial.size(); ++i)
    {
        res[i] = partial[i];
    }
    int remaining = n - lastPowerOfTwo;
    for (int i = 0; i < remaining; ++i)
    {
        res.push_back(partial[i]);
    }
    return res;
}

void solve()
{
    int n;
    cin >> n >> k;
    vector<int> pattern = findPattern(n);
    for (int i = 0; i < n; ++i)
    {
        cout << pattern[i] << " ";
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