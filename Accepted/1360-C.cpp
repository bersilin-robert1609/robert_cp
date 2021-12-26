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

    sort(arr, arr+n);

    int even=0, odd=0;

    int f=0;
    for(int i=0; i<n-1; i++){
        for(int j=1; j<n; j++){
            if(arr[j]-arr[i] == 1) {
                f=1;
                break;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]%2==0) even++;
        else odd++;
    }

    if(even%2==0 && odd%2==0){
        cout<<"YES"<<endl;
    }else if(even%2!=0 && odd%2!=0){
        if(f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}