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
    double arr[n];
    double sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int maxIndex=0;
    for(int i=1; i<n; i++){
        if(arr[maxIndex]<arr[i]) maxIndex=i;
    }
    double maxsum = arr[maxIndex]+(sum-arr[maxIndex])/(n-1);

    cout<<fixed<<setprecision(8)<<maxsum<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}