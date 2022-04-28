#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    string str;
    cin>>str;

    int zero = 0, one = 0, n = str.length();
    for(int i=0; i<n; i++){
        if(str[i]=='0') zero++;
        else one++;
    }

    if(n==1){
        cout<<0<<endl;
        return;
    }

    if(n%2==1){
        cout<<min(zero, one)<<endl;
        return;
    }

    if(n%2==0 && zero!=one){
        cout<<min(zero, one)<<endl;
        return;
    }
    int curr = str[0];
    int flag = 0;
    for(int i=1; i<n; i++){
        if(str[i]!=curr){
            flag=1;
            break;
        }else{
            curr = str[i];
        }
    }

    cout<<min(zero, one)-flag<<endl;
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