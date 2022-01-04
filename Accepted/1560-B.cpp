#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int a, b, c;
    cin>>a>>b>>c;

    int n = abs((b-a)*2);

    if(a>n || b>n || c>n){
        cout<<-1<<endl;
        return;
    }

    int op1 = c+n/2, op2 = c-n/2;

    if(op1>0 && op1<=n && op1!=a && op1!=b){
        cout<<op1<<endl;
        return;
    }

    if(op2>0 && op2<=n && op2!=a && op2!=b){
        cout<<op2<<endl;
        return;
    }

    cout<<-1<<endl;
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