#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[n];

    int diffs[n];
    for(int i=1; i<n; i++) diffs[i]=arr[i]-arr[i-1];

    int diffnum = 0;
    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
    cin>>t;
    while(t--) solve();
    return 0;
}