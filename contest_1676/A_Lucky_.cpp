#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    string str;
    cin>>str;

    int sum1 = 0, sum2 = 0;
    for(int i=0; i<3; i++) sum1 += (str[i] - '0');
    for(int i=3; i<6; i++) sum2 += (str[i] - '0');

    if(sum1 == sum2) cout<<"YES"<<endl;
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