#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve(int i)
{
    cout<<"Case #"<<i<<": ";
    int n, q;
    cin>>n>>q;

    vector<vector<int>> adj(n);
    
    for(int i=0; i<n-1; i++)
    {
        int u, v;
        cin>>u>>v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
    cin>>t;
    for(int i=0; i<t; i++) solve(i+1);
    return 0;
}