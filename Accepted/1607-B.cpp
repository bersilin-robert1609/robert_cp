#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

typedef long long int Int;

void solve()
{
    Int x, n;
    cin>>x>>n;

    if(x%2==0){
        if(n%4==0) x=x+0;
        else if(n%4==1) x=x-n;
        else if(n%4==2) x=x+1;
        else x=x+n+1;}
    else{
        if(n%4==0) x=x+0;
        else if(n%4==1) x=x+n;
        else if(n%4==2) x=x-1;
        else x=x-(n+1);
    }

    cout<<x<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}