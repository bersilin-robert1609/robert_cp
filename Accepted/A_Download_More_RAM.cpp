#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, k;
    cin>>n>>k;

    vector<pair<int, int>> a(n);

    for(int i=0; i<n; i++) cin>>a[i].first;
    for(int i=0; i<n; i++) cin>>a[i].second;

    sort(a.begin(), a.end());
    int i=0;

    while(k >= a[i].first && i<n){
        k += a[i].second;
        i++;
    }
    cout<<k<<endl;
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