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
    vector<int> values(3);
    for(int i=0; i<3; i++) cin>>values[i];
    int ans = 0;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            int sum = i*values[0] + j*values[1];
            if((n-sum) >= 0 && (n-sum)%values[2]  == 0) 
            {
                ans = max(ans, (i+j+(n-sum)/values[2]));
            }
        }
    }
    
    cout<<ans<<endl;
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