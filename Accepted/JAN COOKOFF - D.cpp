#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, m;
    cin>>n>>m;

    int a[n], b[m];

    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];

    int maxSorted = 1;
    int sorted = 1;

    for(int i=1; i<n; i++){

        if(a[i]>=a[i-1]) sorted++;
        else{
            if(maxSorted<sorted) maxSorted = sorted;
            sorted = 1;
        }
    }
    if(sorted>maxSorted) maxSorted = sorted;

    int maxSorted2 = 1;
    int sorted2 = 1;

    for(int i=1; i<m; i++){

        if(b[i]>=b[i-1]) sorted2++;
        else{
            if(maxSorted2<sorted2) maxSorted2 = sorted2;
            sorted2 = 1;
        }
    }
    if(sorted2>maxSorted2) maxSorted2 = sorted2;
    
    cout<<maxSorted2+maxSorted<<endl;
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