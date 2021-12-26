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

    string a, b;
    cin>>a>>b;

    int oo=0, oz=0, zo=0, zz=0;

    for(int i=0; i<n; i++){
        if(a[i]==0){
            if(b[i]==0) oo++;
            else oz++;
        }else{
            if(b[i]==0) zo++;
            else zz++;
        }
    }

    int diff = oz+zo;
    int same = zz+oo;
    int lits = zo+zz;
    
    if(diff == 0){
        cout<<0<<endl;
        return;
    }
    if(lits == 0){
        cout<<-1<<endl;
        return;
    }
    if(zo+oo == 0){
        cout<<-1<<endl;
        return;
    }

    if(same%2==1 && diff%2==0){
        if(diff>same){
            cout<<same<<endl;
        }else{
            cout<<diff<<endl;
        }
        return;
    }else if(same%2==0 && diff%2==1){
        cout<<-1<<endl;
        return;
    }else{

    }
   

}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}