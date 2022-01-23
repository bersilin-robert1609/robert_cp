#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int l, r, k;
    cin>>l>>r>>k;

    if(l==r && l>1){
        cout<<"YES"<<endl;
        return;
    }

    int e, o;

    if(l%2==1 && r%2==1) e = (r-l)/2;
    else e = ((r-l)/2)+1;

    o = (r-l+1)-e;

    //cout<<o<<" "<<e<<endl;

    if(o>e){
        if(k<o){
            cout<<"NO"<<endl;
            return;
        }
    }else{
        if(k<min(e, o)){
            cout<<"NO"<<endl;
            return;
        }
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