#include<bits/stdc++.h>
using namespace std;

//#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    unsigned long long int x, y;
    cin>>x>>y;
    unsigned long long int a, b;
    cin>>a>>b;

    if(2*a<b){
        unsigned long long int ans = (x+y)*a;
        cout<<ans<<endl;
    }else{
        
        unsigned long long int min, max;
        if(x>y){
            min=y, max=x;
        }else{
            max=y, min=x;
        }
        unsigned long long int ans = min*b+(max-min)*a;

        cout<<ans<<endl;
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