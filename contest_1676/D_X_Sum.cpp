#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, m;
    cin>>n>>m;

    vector<vector<int>> arr(n);
    for(int i=0; i<n; i++)
    {
        arr[i].resize(m);
        for(int j=0; j<m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ans = INT_MIN;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int temp = 0;
            int currX = i, currY = j;
            while(currX >= 0 && currY >= 0)
            {
                temp += arr[currX][currY];
                currX--; currY--;
            }

            currX = i, currY = j;
            while(currX < n && currY < m)
            {
                temp += arr[currX][currY];
                currX++; currY++;
            }

            currX = i, currY = j;
            while(currX >= 0 && currY < m)
            {
                temp += arr[currX][currY];
                currX--; currY++;
            }

            currX = i, currY = j;
            while(currX < n && currY >= 0)
            {
                temp += arr[currX][currY];
                currX++; currY--;
            }

            temp -= 3 * arr[i][j];
            if(temp > ans) ans = temp;
        }
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