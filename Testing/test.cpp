#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    vector<int> a = {3, 2, 1, 7, 4};
    sort(a.begin(), a.end());
    // 1 2 4 5  -> 4
    int index = lower_bound(a.begin(), a.end(), 3) - a.begin();
    auto iter = lower_bound(a.begin(), a.end(), 3);
    map<int, int> b;
    auto itu = b.begin();
    itu++;
    set<int> s;
    //s.lower_bound(x);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
   // cin>>t;
    while(t--) solve();
    return 0;
}