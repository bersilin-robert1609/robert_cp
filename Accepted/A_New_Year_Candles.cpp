#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int a, b;
    cin>>a>>b;

    int t=0;

    while(1){
        t++;
        a--;
        if(t%b==0) a++;
        if(a==0) break;
    }

    cout<<t<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
    //cin>>t;
    while(t--) solve();
    return 0;
}