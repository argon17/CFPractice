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
    // 001, 011 will give the answer as 2*(value at ith bit = 2^i)
    // 000, 111 will give the answer as 0
    // the idea is to choose at least two numbers with different bits at maximum positions
    int l, r;
    cin >> l >> r;
    // l = 10100110110
    // r = 10101101101
    // a = 10101000000, b = l-1, c = any value which is not a and b, but in the range of l and r
    int a = 0;
    bool flag = false;
    for (int i = 30; i >= 0; --i)
    {
        if ((l & (1 << i)) != (r & (1 << i)))
        {
            a |= (1 << i);
            debug(make_pair(i, a));
            break;
        }
        else
        {
            a |= (l & (1 << i));
        }
    }
    debug(a);
    int b = a - 1, c;
    for (int i = r; i >= l; --i)
    {
        if (i != a && i != b)
        {
            c = i;
            break;
        }
    }
    cout << a << " " << b << " " << c << endl;
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