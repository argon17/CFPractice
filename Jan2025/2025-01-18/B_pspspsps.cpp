#include <bits/stdc++.h>
#include <algo/debugger.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int st = s[0] == 's' ? 1 : 0;
    int en = s[n - 1] == 'p' ? n - 1 : n;
    int f = st;
    while(s[f] == '.') ++f;
    for(int i=f+1; i<en; ++i){
        if(s[i]=='.') continue;
        if(s[i]!=s[f]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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