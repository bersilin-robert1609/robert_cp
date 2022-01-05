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
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    int median;

    sort(arr, arr+n);

    if(n%2==0) median = arr[(n/2)-1];
    else median = arr[(n-1)/2];

    if(median*n == sum){
        cout<<0<<endl;
        return;
    }

    if(sum<median*n){
        cout<<median*n-sum<<endl;
    }

    int ans=0;
    int k=1;
    int ptr = (n%2==0) ? (n/2): (n+1)/2;
    while(sum>median*n && ptr<n){

        cout<<sum<<" "<<ptr<<" "<<ans<<" "<<median<<endl;

        if(sum-median*n <= (arr[ptr]-arr[ptr-k])*(n+k)){
            ans+=sum-median*n;
            break;
        }

        for(int i=ptr-k; i<ptr; i++){
            arr[i]+=(arr[ptr]-arr[ptr-k]);
            sum+=(arr[ptr]-arr[ptr-k]);
            ans+=(arr[ptr]-arr[ptr-k]);
        }

        median+=arr[ptr]-arr[ptr-k];
        ptr++;
        k++;
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