#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int a, b, c;
    cin>>a>>b>>c;

    if(2*b == a+c){
        cout<<"YES"<<endl;
        return;
    }

    int d = (c-b);
    if((b-d)%a==0 && (b-d)/a>0){
        cout<<"YES"<<endl;
        return;
    }

    d = (b-a);
    if((b+d)%c==0 && (b+d)/c>0){
        cout<<"YES"<<endl;
        return;
    }

    if((c-a)%2==0){
        d=(c-a)/2;
        if((a+d)%b==0 && (a+d)/b>0){
            cout<<"YES"<<endl;
            return;
        }
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