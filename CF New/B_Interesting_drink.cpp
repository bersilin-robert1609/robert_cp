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

    sort(a.begin(), a.end());

    int q;
    cin>>q;
    while(q--)
    {
        int query;
        cin>>query;

        auto it = upper_bound(a.begin(), a.end(), query);
        if(it != a.end())
        {
            cout<<it-a.begin()<<endl;
        }
        else cout<<n<<endl;
    }
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
    //cin>>t;
    while(t--) solve();
    return 0;
}