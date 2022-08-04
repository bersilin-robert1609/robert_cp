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
    int max_count = 1;
    for(int i=1; i<n; i++)
    {
        int count = 1;
        while(a[i-1] <= a[i] && i<n) 
        {
            count++;
            i++;
        }
        //cout<<max_count<<" "<<count<<" "<<i<<endl;
        if(max_count < count) max_count = count;
    }
    cout<<max_count<<endl;
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