#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;
    cin>>n;

    vector<int> a(n);
    for(auto &i : a){
        cin >> i;
    }

    sort(a.begin(), a.end());
    for(int i=1; i<=n/2; i++){
        cout<<a[i]<<" "<<a[0]<<endl;
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