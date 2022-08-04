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
    vector<int> a(n);
    for(auto &i : a) cin >> i;

    int zero = 0;
    bool toBeCounted = false;
    int ans = 0;

    for(int i=0; i<n-1; i++)
    {
        if(a[i] != 0) toBeCounted = true;
        if(a[i] == 0)
        {
            if(toBeCounted)
            {   
                zero++;
                continue;
            }
            else continue;
        }

        ans += a[i];
    }
    cout<<zero + ans<<endl;
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