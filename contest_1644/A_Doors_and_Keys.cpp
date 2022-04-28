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

    int flagr = 0, flagb = 0, flagg = 0;

    int i=0;
    while(i<=str.length()){

        if(str[i]=='r') flagr = 1;
        else if(str[i]=='b') flagb = 1;
        else if(str[i]=='g') flagg = 1;
        else if(str[i]=='R'){
            if(flagr == 1){
                i++;
                continue;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(str[i]=='B'){
            if(flagb == 1){
                i++;
                continue;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(str[i]=='G'){
            if(flagg == 1){
                i++;
                continue;
            }else{
                cout<<"NO"<<endl;
                return;
            }
        }
        i++;
    }

    cout<<"YES"<<endl;
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