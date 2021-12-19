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

    if(x==y){
        cout<<2*x<<endl;
    }else{
        if(x>y){
            cout<<2*y+(x-y-1)*2+1<<endl;
        }else{
            cout<<2*x+(y-x-1)*2+1<<endl;
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