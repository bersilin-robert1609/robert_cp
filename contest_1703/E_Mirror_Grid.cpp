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
    vector<vector<char>> grid(n);
    for(int i=0; i<n; i++)
    {
        grid[i].resize(n);
        string str;
        cin>>str;
        for(int j=0; j<n; j++)
        {
            grid[i][j] = str[j];
        }
    }
    vector<vector<int>> visited(n);
    for(int i=0; i<n; i++) visited[i].resize(n);
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(visited[i][j] == 0){
                int one = 0, zero = 0;
                if(grid[i][j] == '0') zero++;
                else one++;
                if(grid[j][n-i-1] == '0') zero++;
                else one++;
                if(grid[n-i-1][n-j-1] == '0') zero++;
                else one++;
                if(grid[n-j-1][i] == '0') zero++;
                else one++;
                ans += (4 - max(zero, one));
                visited[i][j] = visited[j][n-i-1] = visited[n-i-1][n-j-1] = visited[n-j-1][i] = 1;
            }
        }
    }
    cout<<ans<<endl;
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