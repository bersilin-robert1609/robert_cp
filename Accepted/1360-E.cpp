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

    char arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int f=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]=='1'){
                if(j+1<n){
                    if(arr[i][j+1]=='1') continue;
                }else{
                    continue;
                }

                if(i+1<n){
                    if(arr[i+1][j]=='1') continue;
                }else{
                    continue;
                }

                f=1;
                break;
            }
        }
    }

    if(f==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}