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
    map<int, int> count;
    for(int i=0; i<n; i++) count[a[i]]++;

    int ans = 0;
    ans += count[4];

    int pairs = 0;
    if(count[3] > count[1]) pairs += count[1];
    else pairs += count[3];

    count[1] -= pairs;
    count[3] -= pairs;

    ans += count[3];

    pairs += count[2]/2;
    count[2] %= 2;

    pairs += count[1]/4;
    count[1] %= 4;

    ans += pairs;

    if(count[2] == 1 && count[1] <= 2) ans++;
    else if(count[2] == 1) ans +=2;
    else if(count[2] == 0 && count[1] != 0) ans++;

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