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
    if(n==1) cout<<1<<endl;
    else if(n==2) cout<<-1<<endl;
    else if(n%2==0){
        int k=1;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<k<<" ";
                if(k!=n*n-1) k+=2;
                else k=2;
            }
            cout<<endl;
        }
    }else{
        int k=1;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<k<<" ";
                if(k!=n*n) k+=2;
                else k=2;
            }
            cout<<endl;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}