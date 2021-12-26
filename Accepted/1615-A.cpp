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

    int sum=0;
    for(int i=0; i<n; i++) sum+=arr[i];

    int rem = sum%n;

    if(rem==0) cout<<0<<endl;
    else cout<<1<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}