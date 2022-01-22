#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;
    cin>>n;

    vector<pair<pair<int, int>, pair<int, int>>> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i].first.second;
        a[i].second.first = i+1;
    }
    string str;
    cin>>str;

    for(int i=0; i<n; i++){
        a[i].first.first = str[i]-'0';
        a[i].second.second = 0;
    }

    sort(a.begin(), a.end());

    for(int i=0; i<n; i++){
        a[i].second.second = i+1;
    }

    for(int i=0; i<n; i++){
        pair<int, int> temp = a[i].first;
        a[i].first = a[i].second;
        a[i].second = temp;
    }

    sort(a.begin(), a.end());

    for(int i=0; i<n; i++){
        cout<<a[i].first.second<<' ';
    }
    cout<<endl;
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