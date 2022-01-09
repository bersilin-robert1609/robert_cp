#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    string str;
    cin>>str;

    vector<int> freq(26);

    for(int i=0; i<str.length(); i++) freq[str[i]-'a']++;

    int ans=0;
    int ones=0;

    for(int i=0; i<26; i++){
        if(freq[i] == 1) ones++;
        else if(freq[i] > 1) ans++;
        else continue;
    }

    ans+=ones/2;

    cout<<ans<<endl;
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