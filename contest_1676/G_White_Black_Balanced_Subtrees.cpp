#include <bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;
vector<vector<int>> adj;

int dfs(int i, int j, string str, vector<int> &value)
{
    int ans = 0;
    int sum = 0;

    for(int k=0; k<adj[i].size(); k++)
    {
        if(adj[i][k] == j) continue;

        ans += dfs(adj[i][k], i, str, value);
        sum += value[adj[i][k]];
    }

    if(str[i] == 'W') sum++;
    else sum--;

    value[i] = sum;

    if(sum == 0) return ans+1;
    else return ans;
}

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    adj.clear();
    adj.resize(n);
    for(int i=1; i<n; i++){
        cin>>a[i];
        a[i]--;
        adj[a[i]].push_back(i);
        adj[i].push_back(a[i]); 
    }
    vector<int> value(n);
    string str;
    cin>>str;

    cout<<dfs(0, -1, str, value)<<endl;

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