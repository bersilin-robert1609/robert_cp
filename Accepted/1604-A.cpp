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
    int array[n+1];

    for(int i=1; i<n+1; i++) cin>>array[i];

    int moves=0;

    for(int i=1; i<n+1; i++){
        if(array[i]>(moves+i)){
            moves += (array[i]-(moves+i));
        }
    }

    cout<<moves<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}