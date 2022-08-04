#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, x;
    cin>>n>>x;

    vector<int> a(2*n);
    for(int i=0; i<2*n; i++) cin>>a[i];

    sort(a.begin(), a.end());
    for(int i=0; i<n; i++)
    {
        if(a[i+n] - a[i] < x)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
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