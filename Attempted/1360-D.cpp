#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long int

void solve()
{
    int n, k;
    cin>>n>>k;

    int N = 2e6+10;

    if(n<=k) cout<<1<<endl;
    else{
        for(int i=2; i*i<=n; i++){
            if(n%i==0 && n/i<=k){
                cout<<i<<endl;
                return;
            }
        }
        cout<<n<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}