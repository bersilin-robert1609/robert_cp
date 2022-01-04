#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;
    cin>>n;

    int srt = sqrt(n);

    int rem = n-srt*srt;

    if(rem == 0){
        cout<<srt<<" "<<1<<endl;
        return;
    }

    if(rem<=srt+1){
        cout<<rem<<" "<<srt+1<<endl;
        return;
    }else{
        cout<<srt+1<<" "<<2*srt+2-rem<<endl;
        return;
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