#include<bits/stdc++.h>
#include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long int

void solve()
{
    int n;
    cin>>n;

    int ans=0;
    int pow2=0, pow3=0, pow6=0;

    for(int i=1; i*i<=n; i++){
        if(i*i<=n) pow2++;
        if(pow(i, 3)<=n) pow3++;
        if(pow(i, 6)<=n) pow6++;
    }

    ans = pow2+pow3-pow6;

    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}