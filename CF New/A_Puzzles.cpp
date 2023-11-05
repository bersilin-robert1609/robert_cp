#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, m;
    cin>>n>>m;

    vector<int> a(m);
    for(int i=0; i<m; i++) cin>>a[i];

    sort(a.begin(), a.end());

    int minv = a[n-1] - a[0];
    for(int i=0; i<=m-n; i++)
    {
        if(minv > a[i+n-1]-a[i]) minv = a[i+n-1]-a[i];
    }
    cout<<minv<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
    //cin>>t;
    while(t--) solve();
    return 0;
}