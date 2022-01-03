#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int s, n;
    cin>>s>>n;

    vector<pair<int, int>> dragsy(n);

    for(int i=0; i<n; i++){
        cin>>dragsy[i].first>>dragsy[i].second;
    }

    sort(dragsy.begin(), dragsy.end());

    int i=0;

    while(i<n){

        if(s<dragsy[i].first){
            cout<<"NO"<<endl;
            return;
        }

        s+=dragsy[i].second;
        i++;
    }

    cout<<"YES"<<endl;
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