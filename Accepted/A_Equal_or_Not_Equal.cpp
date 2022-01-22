#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    string str;
    cin>>str;

    int count = 0;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='N') count++;
    }

    if(count == 1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    return;
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