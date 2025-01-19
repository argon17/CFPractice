#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n; cin>>n;
    // using unordered_map instead of map will give TLE
    map<int, int> ew, ns;
    map<int, int> nec, nwc;
    for(int i=0; i<n; i++){
        int x, y; cin>>x>>y;
        // parallel to y axis
        ew[x]++;
        // parallel to x axis
        ns[y]++;
        // with slope -1
        nwc[x+y]++;
        // with slope 1
        nec[x-y]++;
    }
    int ans = 0;
    for(auto i: ew){
        ans += i.second*(i.second-1);
    }
    for(auto i: ns){
        ans += i.second*(i.second-1);
    }
    for(auto i: nec){
        ans += i.second*(i.second-1);
    }
    for(auto i: nwc){
        ans += i.second*(i.second-1);
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