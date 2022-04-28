#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

int maxSubarraySum(int arr[], int n){
    int max_so_far = INT_MIN, max_ends_here = 0;
    for(int i=0; i<n; i++){
        max_ends_here += arr[i];
        if(max_so_far < max_ends_here){
            max_so_far = max_ends_here;
        }
        if(max_ends_here < 0){
            max_ends_here = 0;
        }
    }
    return max_so_far;
}

void solve()
{
    int n, x; cin>>n>>x;
    int a[n], maxIndex;
    maxIndex = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]>a[maxIndex]) maxIndex=i;
    }

    for(int i=0; i<n; i++){
        int maxSum = maxSubarraySum(a, n);

        
    }
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