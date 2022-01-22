#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int l[3];
    for(int i=0; i<3; i++) cin>>l[i];

    sort(l, l+3);

    if(l[2] == l[1]+l[0]){
        cout<<"YES"<<endl;
        return;
    }

    if(l[0]==l[1] && l[2]%2==0){
        cout<<"YES"<<endl;
        return;
    }
    if(l[2]==l[1] && l[0]%2==0){
        cout<<"YES"<<endl;
        return;
    }
    
    cout<<"NO"<<endl;
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