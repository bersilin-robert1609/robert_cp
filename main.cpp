#include<bits/stdc++.h>
#include <cmath>
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

    int maxIndex=0;
    for(int i=1; i<n; i++){
        if(arr[maxIndex]<arr[i]) maxIndex = i;
    }

    int numberOfTwos=0;
    for(int i=0; i<n; i++){
        if(i!=maxIndex){
            while(arr[i]%2==0){
                numberOfTwos++;
                arr[i]/=2;
            }
        }
    }

    arr[maxIndex] = arr[maxIndex]*pow(2, numberOfTwos);

    int ans=0;
    for(int i=0; i<n; i++) ans+=arr[i];

    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}