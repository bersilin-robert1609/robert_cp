#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    string str;
    cin>>str;

    string hello = "hello";

    int i=0, j=0;

    while(i<5){

        int f=0;

        while(j<str.length()){
            if(str[j]==hello[i]){
                f=1;
                break;
            }
            j++;
        }

        if(j==str.length() && i<5){
            cout<<"NO"<<endl;
            return;
        }

        if(f==1){
            j++;
        }

        i++;
    }

    cout<<"YES"<<endl;
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
    //cin>>t;
    while(t--) solve();
    return 0;
}