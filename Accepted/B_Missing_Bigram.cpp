#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

//string arr[4] = {"ab", "ba", "aa", "bb"};

void solve()
{
    int n;
    cin>>n;

    string str = "";

    for(int i=0; i<n-2; i++){

        string temp;
        cin>>temp;
        //cout<<temp<<endl;

        if(str[str.length()-1] != temp[0]){
            str = str+temp;
        }else{
            str = str+temp[1];
        }
        //cout<<str<<endl;
    }

    if(str.length()<n){
        str+='a';
        cout<<str<<endl;
    }else{
        cout<<str<<endl;
    }
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