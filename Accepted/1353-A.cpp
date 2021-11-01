#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long

void solve()
{
    int n, m;
    cin>>n>>m;
    int ans;

    if(n==1) ans=0;
    else if(n==2) ans=m;
    else ans=2*m;

    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}