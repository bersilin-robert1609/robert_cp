#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;
 
#define int long long int
 
void solve()
{
    int n;
    cin>>n;
 
    int arr[n];
 
    for(int i=0; i<n; i++) cin>>arr[i];
 
    sort(arr,arr+n);
 
    int diff = arr[1]-arr[0];
    if(diff<0) diff = -diff;
 
    for(int i=2; i<n; i++){
        int temp = arr[2]-arr[1];
        if(temp<0) temp = -temp;
        if(temp<diff) diff = temp;
    }
 
    cout<<diff<<endl;
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}