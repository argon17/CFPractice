#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <algo/debugger.h>
#else
#define debug(...) {};
#endif
#define int long long
#define endl '\n'
using namespace std;

// aa

int findAns(string s)
{
    if (s.size() <= 1)
    {
        return 1;
    }
    if (s[0] == s[1])
    {
    }
}

// abcd
// abcd, acd, bcd, ad, bd, a, b, cd,c,d

// cd -> cd, c, d

// aabc
// aabc, abc, ac, bc, a, b, c
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = findAns(s);
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