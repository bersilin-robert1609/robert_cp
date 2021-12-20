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

    int strLength = str.length();

    if(strLength%2!=0) cout<<"NO"<<endl;
    else{
        int i;
        for(i=0; i<strLength/2; i++){
            if(str[i]!=str[i+strLength/2]){
                cout<<"NO"<<endl;
                break;
            }
        }
        if(i==strLength/2) cout<<"YES"<<endl;
    }

}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}