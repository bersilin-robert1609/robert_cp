#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
#include <string>
using namespace std;

#define int long long int

void solve()
{
    string number;
    cin>>number;

    int digits = number.length();
    int evendigits = 0;
    
    for(int i=0; i<digits; i++){
        if((number[i]-'0')%2==0) evendigits++;
    }

    if(number[digits-1]%2==0) cout<<0<<endl;
    else{
        if(number[0]%2==0) cout<<1<<endl;
        else{
            if(evendigits>0) cout<<2<<endl;
            else cout<<-1<<endl;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}