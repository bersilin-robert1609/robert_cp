#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mod = 1e9+7;

ll min(ll a, ll b) {return min(a, b);}

int main()
{
    ll l, n, k;
    cin>>n>>l>>k;
    vector<ll> a(n), c(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int j = 0; j < n; j++) cin>>c[j];
    a.push_back(n);
    vector<vector<ll>> dp(n+1, vector<ll> (k+1, mod));
    dp[0][0] = 0;
    dp[1][0] = c[0] * (a[1] - a[0]);
    for(int i = 2; i < n; i++)
    {
        dp[i][0] = dp[i-1][0] + c[i-1] * (a[i] - a[i-1]);
        for(int j = 1; j < min(i-1, k); j++)
        {
            if(dp[i-1][j] < mod)
                dp[i][j] = dp[i-1][j];
            if(dp[i-2][j-1] < mod)
            {
                dp[i][j] = min(dp[i][j], dp[i-2][j-1] + )
            }
        }
    }
}