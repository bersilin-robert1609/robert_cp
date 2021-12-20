#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long int

void solve()
{
    int x, y;
    cin>>x>>y;

    int ans = 0;

    if(x%3==0 || y%3==0){
        if(x%3==0){
            ans = (x/3)*y;
        }else{
            ans = (y/3)*x;
        }
    }else{
        
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}