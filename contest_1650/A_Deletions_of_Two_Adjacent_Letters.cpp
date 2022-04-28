#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    string s;
    cin>>s;
    char c;
    cin>>c;

    vector<int> v;

    for(int i=0; i<s.size(); i++){
        if(s[i] == c) v.push_back(i);
    }

    for(int i=0; i<v.size(); i++){
        if(v[i]%2==0 && (s.size()-v[i]-1)%2 == 0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
    return;
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