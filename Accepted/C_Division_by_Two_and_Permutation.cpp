#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n; cin>>n;

    vector<int> a(n);
    vector<bool> used(n+1, false);

    for(auto &i : a) cin>>i;

    sort(a.begin(), a.end(), greater<int>());

    bool ok = true;
    
    for(auto &i : a){
        int x = i;
        while(x>n || used[x]==true) x/=2;
        if(x>0) used[x]=true;
        else{
            ok = false;
            break;
        }
    }

    cout<<(ok ? "YES" : "NO")<<endl;
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