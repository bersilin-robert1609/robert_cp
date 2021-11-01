#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin>>n;
    int l[n], r[n];
    for(int i=0; i<n; i++) cin>>l[i]>>r[i];

    int maxl=l[0];
    for(int i=1; i<n; i++){
        if(maxl<l[i]) maxl=l[i];
    }
    int minr=r[0];
    for(int i=1; i<n; i++){
        if(minr>r[i]) minr=r[i];
    }

    if(maxl-minr>0) cout<<maxl-minr<<endl;
    else cout<<0<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}