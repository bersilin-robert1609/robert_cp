#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long


void solve()
{
    int n,k;
    cin>>n>>k;

    int check=0;
    
    if(n%2==0) cout<<n+k*2<<endl;
    else{
        int ans=n;
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                ans+=i;
                check=1;
                break;
            }
        }
        if(check==0) ans+=n;
        cout<<ans+(k-1)*2<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}