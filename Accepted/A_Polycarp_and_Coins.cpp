#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;
    cin>>n;

    if(n%3==0) cout<<n/3<<" "<<n/3<<endl;
    else if(n%3==1) cout<<(n+2)/3<<" "<<(n-1)/3<<endl;
    else cout<<(n-2)/3<<" "<<(n+1)/3<<endl;
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