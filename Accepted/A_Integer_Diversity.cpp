#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n; cin >> n;

    int arr[n];
    for(int i = 0; i < n; i += 1){
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]==arr[i]) arr[j] = -arr[j];
        }
    }

    sort(arr, arr+n);

    int i=0;
    int ans=1;
    while(i<n-1){
        if(arr[i]!=arr[i+1]) ans++;
        i++;
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