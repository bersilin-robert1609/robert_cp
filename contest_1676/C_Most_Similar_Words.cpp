#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

int findDiff(string str1, string str2)
{
    int ans = 0;
    for(int i=0; i<str1.length(); i++)
    {
        ans += abs(str1[i] - str2[i]);
    }
    return ans;
}

void solve()
{
    int n, m;
    cin>>n>>m;

    string arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int min = INT_MAX;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int temp = findDiff(arr[i], arr[j]);
            if(temp < min) min = temp;
        }
    }
    cout<<min<<endl;
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