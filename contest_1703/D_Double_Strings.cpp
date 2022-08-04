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

    vector<string> a(n);
    for(auto &i : a) cin>>i;
    vector<int> ans(n);
    unordered_map<string, bool> present;
    for(int i=0; i<n; i++)
    {
        present[a[i]] = true;
    }
    for(int i=0; i<n; i++)
    {
        string str = a[i];
        for(int j=1; j<str.size(); j++)
        {
            string str1 = str.substr(0, j);
            string str2 = str.substr(j, str.size()-j);
            if(present[str1] && present[str2])
            {
                ans[i] = 1;
                break;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
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