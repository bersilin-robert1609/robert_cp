#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int arr[7];

    for(int i=0; i<7; i++) cin>>arr[i];

    int arr2[3];

    arr2[0] = arr[0]; arr2[1] = arr[1];

    arr2[2] = arr[6] - arr[0] -arr[1];

    for(int i=0; i<3; i++) cout<<arr2[i]<<" ";
    cout<<endl;
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