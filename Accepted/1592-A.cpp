#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long int

void solve()
{
    int n, H;
    cin>>n>>H;
    int arr[n];
    
    cin>>arr[0];
    int max=arr[0];
    int maxIndex=0;
    for(int i=1; i<n; i++){
        cin>>arr[i];
        if(max<arr[i]){
            max=arr[i];
            maxIndex=i;
        }
    }
    int max2=0;
    for(int i=0; i<n; i++){
        if(max2<arr[i] && i!=maxIndex) max2=arr[i];
    }
    // cout<<max<<" "<<max2<<endl;
    int ans = H/(max+max2);
    ans*=2;
    if(H%(max+max2)>max) ans+=2;
    else if(H%(max+max2)>0) ans++;

    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}