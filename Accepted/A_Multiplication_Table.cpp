#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, x;
    cin>>n>>x;

    int ans=0;

    for(int i=1; i<=n; i++){
        if(x%i==0 && x/i<=n){
            ans++;
        }
    }

    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
    //cin>>t;
    while(t--) solve();
    return 0;
}