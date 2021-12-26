#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long int

void solve()
{
    int a, b;
    cin>>a>>b;

    int side = (a>b) ? 2*b: 2*a;

    if(side == 2*a && side<b) side=b;
    else if(side == 2*b && side<a) side=a;

    cout<<side*side<<endl;   
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}