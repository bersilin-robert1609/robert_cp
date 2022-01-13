#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, t;
    cin>>n>>t;

    if(n==1 && t==10){
        cout<<-1<<endl;
        return;
    }

    if(t<10){
        for(int i=0; i<n; i++){
            cout<<t;
        }
        cout<<endl;
    }else{
        cout<<1;
        for(int i=1; i<n; i++){
            cout<<0;
        }
        cout<<endl;
    }
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