#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int ans=arr[0] & arr[1];
    int ors = arr[0];

    for(int i=1; i<n-1; i++){
        ors |= arr[i];
        int temp = ors & arr[i+1];

        ans |= temp;
    }

    cout<<ans<<endl;
    
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