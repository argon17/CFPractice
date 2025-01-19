#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n; cin>>n;
    map<int32_t, int32_t> ew, ns;
    map<int32_t, int32_t> nec, nwc;
    for(int i=0; i<n; i++){
        int x, y; cin>>x>>y;
        ew[x]++;
        ns[y]++;
        nwc[x+y]++;
        nec[x-y]++;
    }
    int ans = 0;
    for(auto i: ew){
        int temp = i.second;
        if(temp>1)
        ans += temp*(temp-1);
    }
    for(auto i: ns){
        int temp = i.second;
        if(temp>1)
        ans += temp*(temp-1);
    }
    for(auto i: nec){
        int temp = i.second;
        if(temp>1)
        ans += temp*(temp-1);
    }
    for(auto i: nwc){
        int temp = i.second;
        if(temp>1)
        ans += temp*(temp-1);
    }
    cout<<ans<<endl;
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