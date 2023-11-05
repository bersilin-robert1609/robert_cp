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
    map<string, int> mappings;
    mappings["Tetrahedron"] = 4;
    mappings["Cube"] = 6;
    mappings["Octahedron"] = 8;
    mappings["Dodecahedron"] = 12;
    mappings["Icosahedron"] = 20;

    int ans = 0;
    while(n--)
    {
        string str;
        cin>>str;

        ans += mappings[str];        
    }
    cout<<ans<<endl;
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