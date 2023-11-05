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

    string ans = "";
    bool first = false;
    while(str.length() >= 3)
    {
        if(str.substr(0, 3) == "WUB") 
        {
            if(first) 
            {
                ans += " ";
                first = false;
            }
            str = str.substr(3, str.length()-3);
        }
        else 
        {
            first = true;
            ans += str[0];
            str = str.substr(1, str.length()-1);
        }
    }

    ans += str;
    cout<<ans<<endl;
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