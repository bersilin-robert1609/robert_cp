#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long int

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int term=0;
    int ans=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0) ans++;
    }
    cout<<ans<<" ";

    if(ans>0){
        term++;
        while(term<=n){
            ans = 0;
            for(int i=0; i<n; i++){
                if(arr[i]==term) ans++;
            }
            if(ans>0){
                cout<<ans<<" ";
                term++;
            }else{
                cout<<0<<" ";
                break;
            }
        }
    }

    while(term<n){
        cout<<-1<<" ";
        term++;
    }cout<<endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}