#include<bits/stdc++.h>
using namespace std;

//#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, m;
    cin>>n>>m;

    unsigned long long int ans = 0;
    int curr = 1;

    while(m--){
        int temp;
        cin>>temp;

        if(temp>=curr) ans += (temp-curr);
        else ans += (temp + n-curr);

        curr = temp;
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