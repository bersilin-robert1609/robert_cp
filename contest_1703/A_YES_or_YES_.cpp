#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    string str; cin>>str;
    if(str == "YES" || str == "yes" || str == "Yes" || str == "yEs" || str == "yeS" || str == "YEs" || str == "YeS" || str == "yES")
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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