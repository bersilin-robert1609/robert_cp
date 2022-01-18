#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    string str;
    cin>>str;

    int ansIndex = -1;
    int index = -1;

    for(int i=0; i<str.length()-1; i++){

        int sum = str[i]-'0' + str[i+1]-'0';
        if(sum>=10){
            ansIndex = i;
        }else{
            if(index==-1) index = i;
        }

    }
    string temp;
    if(ansIndex>=0) temp = str.substr(0, ansIndex) + to_string(str[ansIndex]-'0' + str[ansIndex+1]-'0') + str.substr(ansIndex+2, str.length()-(ansIndex+1));
    else temp = str.substr(0, index) + to_string(str[index]-'0' + str[index+1]-'0') + str.substr(index+2, str.length()-(index+1));

    cout<<temp<<endl;
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