#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
#include <string>
using namespace std;

#define int long long int

void solve()
{
    string str;
    cin>>str;
    int n=str.length();
    int qns=0;

    int check=0;
    for(int i=0; i<n; i++){
        if(str[i]=='?') qns++;
        else if(str[i]=='(') check=1;
        else{
            if(check==0){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    if(qns%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;   
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}