#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long int

void solve()
{
    string str;
    cin>>str;
    int n=str.length();

    int qns=0;
    for(int i=0; i<n; i++){
        if(str[i]=='?') qns++;
    }

    if(qns%2!=0 || str[0]==')' || str[n-1]=='(') cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}