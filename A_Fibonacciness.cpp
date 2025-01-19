#include <bits/stdc++.h>
// #include <algo/debugger.h>
#define int long long
using namespace std;

void solve()
{
    int a1,a2,a4,a5;
    cin >> a1 >> a2 >> a4 >> a5;
    int a3_p[] = {a4 - a2, a1+a2};
    int mx_ans = 1;
    for(int i=0; i<2; ++i){
        int a3 = a3_p[i];
        int ans = 0;
        ans += (a1+a2==a3);
        ans += (a2+a3==a4);
        ans += (a3+a4==a5);
        mx_ans = max(mx_ans, ans);
    }
    cout<<mx_ans<<endl;
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