#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    vector<int> count(1e5+1);
    for(int i=0; i<n; i++)
    {
        count[a[i]]++;
    }
    
    vector<int> value(1e5+1);
    value[0] = 0;
    value[1] = count[1];
    
    for(int i=2; i<(1e5+1); i++)
    {
        value[i] = max(value[i-1], value[i-2] + count[i] * i);
    }
    cout<<value[1e5]<<endl;
    return;
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