#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, l, r, k;
    cin>>n>>l>>r>>k;

    vector<int> a(n);
    for(auto &i:a) cin>>i;

    sort(a.begin(), a.end());

    int it=0;
    while(a[it]<l) it++;

    int count=0;

    while((k-a[it]>=0) && a[it]<=r && it<n){
        k = k-a[it];
        count++;
        it++;
    }

    cout<<count<<endl;
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