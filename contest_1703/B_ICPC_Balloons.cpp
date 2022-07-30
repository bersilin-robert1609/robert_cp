#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;
    cin>>n;

    string str;
    cin>>str;

    map<char, int> count;
    int ans = 0;

    for(int i=0; i<n; i++)
    {
        if(count.find(str[i]) == count.end())
        {
            ans+=2;
        }else ans++;

        count[str[i]]++;
    }
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