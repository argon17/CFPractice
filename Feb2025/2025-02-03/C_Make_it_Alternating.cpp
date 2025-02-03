#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <algo/debugger.h>
#else
#define debug(...) {};
#endif
#define int long long
#define endl '\n'
using namespace std;

const int MAXN = 1e6 + 5;
const int MOD = 998244353;
int fact[MAXN];

void precalculate()
{
    fact[0] = 1;
    for (int i = 1; i < MAXN; ++i)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

void solve()
{
    string s;
    cin >> s;
    char last = 'x';
    vector<int> cont;
    int cur = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == last)
        {
            ++cur;
        }
        else
        {
            if (cur)
            {
                cont.push_back(cur);
            }
            cur = 0;
            last = s[i];
        }
    }
    if (cur)
    {
        cont.push_back(cur);
    }
    debug(cont);
    int res = 0, perm = 1;
    for (auto x : cont)
    {
        res += x;
        perm *= ((x + 1));
        perm %= MOD;
    }
    cout << res << " " << (perm * fact[res]) % MOD << endl;
}

int32_t main()
{
    precalculate();
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}