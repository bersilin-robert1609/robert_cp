#include<bits/stdc++.h>
using namespace std;

#define int long long int



void solve()
{
    int n; cin>>n;

    vector<pair<int, int>> v(n+1);
    for (int i = 1; i < n+1; i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    
    sort(v.begin(), v.end());
    int pos[n+1];
    pos[0]=0;

    int xcord=1, ycord=-1, time=0;

    for(int i=n; i>0; i--){
        if(i%2==0){
            pos[v[i].second] = xcord;
            time+=2*v[i].first*xcord;
            xcord++;
        }else{
            pos[v[i].second] = ycord;
            time+=2*v[i].first*(-ycord);
            ycord--;
        }
    }

    cout<<time<<endl;
    for(int i=0; i<n+1; i++) cout<<pos[i]<<" ";
    cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}