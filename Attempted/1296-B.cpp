#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long int

void solve()
{
    int n;
    cin>>n;

    int ans=0;
    while(n>0){
        int temp = (n-n%10);
        ans+=temp;
        n-=temp;
        n+=temp/10;
        if(n<10){
            ans+=n;
            n=0;
        }
    }

    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}