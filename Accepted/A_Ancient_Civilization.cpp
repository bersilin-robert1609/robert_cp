#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, l;
    cin>>n>>l;

    vector<int> a(n);
    for(auto &i : a) cin>>i;
    int ans[l] = {0};

    for(int i=l-1; i>=0; i--){
        int zero=0, one=0;
        for(int j=0; j<n; j++){
            int rem = a[j]%2;
            if(rem==0) zero++;
            else one++;
            a[j]/=2;
        }
        ans[i]=((zero>one) ? 0:1);
    }

    // for(auto &i : ans) cout<<i;
    // cout<<endl;
    
    int ans2=0;
    for(int i=0; i<l; i++){
        ans2 = ans2*2+ans[i];
    }
    cout<<ans2<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
    cin>>t;
    while(t--) solve();
    return 0;
}