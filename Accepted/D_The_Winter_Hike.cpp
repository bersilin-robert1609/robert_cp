#include<bits/stdc++.h>
using namespace std;

//#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;
    cin>>n;

    int arr[2*n+1][2*n+1];
    for(int i=1; i<=2*n; i++){
        for(int j=1; j<=2*n; j++){
            cin>>arr[i][j];
        }
    }

    unsigned long long int ans=0;

    for(int i=n+1; i<=2*n; i++){
        for(int j=n+1; j<=2*n; j++){
            ans+=arr[i][j];
        }
    }

    int min = arr[1][n+1];
    if(arr[1][2*n]<min) min=arr[1][2*n];
    if(arr[n][n+1]<min) min=arr[n][n+1];
    if(arr[n][2*n]<min) min=arr[n][2*n];
    if(arr[n+1][1]<min) min=arr[n+1][1];
    if(arr[n+1][n]<min) min=arr[n+1][n];
    if(arr[2*n][1]<min) min=arr[2*n][1];
    if(arr[2*n][n]<min) min=arr[2*n][n];

    ans+=min;

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