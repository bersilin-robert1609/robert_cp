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

    int levels[n+1];
    for(int i=0; i<=n; i++) levels[i]=0;

    int p;
    cin>>p;
    int temp;

    for(int i=0; i<p; i++){
        cin>>temp;
        levels[temp]++;
    }

    int q;
    cin>>q;

    for(int i=0; i<q; i++){
        cin>>temp;
        levels[temp]++;
    }

    int Levels=0;

    for(int i=1; i<n+1; i++){
        if(levels[i]>0) Levels++;
    }

    if(Levels==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; t = 1;
    while(t--) solve();
    return 0;
}