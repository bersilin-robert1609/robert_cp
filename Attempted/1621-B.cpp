#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;
    cin>>n;

    vector<pair<pair<int, int>, int>> lrc(n);
    int numbers[n] = {0};

    for(int i=0; i<n; i++){
        cin>>lrc[i].first.first>>lrc[i].first.second>>lrc[i].second;
        numbers[i] = lrc[i].first.second - lrc[i].first.first;
    }

    int coins = lrc[0].second;
    int take[2]={0, 0};
    int minl = lrc[0].first.first, maxr = lrc[0].first.second;

    cout<<coins<<endl;

    for(int i=1; i<n; i++){

        if(lrc[i].first.first>minl && lrc[i].first.second<maxr) continue;

        if(minl>lrc[i].first.first) take[0]=i;

        if(maxr<lrc[i].first.second) take[1]=i;

        if(take[0]==take[1]) coins = lrc[take[0]].second;
        else coins = lrc[take[0]].second + lrc[take[1]].second;

        if(lrc[i].first.first == minl && lrc[i].first.second == maxr){

            int tempcoins=lrc[i].second;
            if(tempcoins<coins) take[0]=take[1]=i;

        }else if(lrc[i].first.first == minl){

            int tempcoins;

            if(take[1]==i) take[0]=i;
            else{
                tempcoins = lrc[take[1]].second + lrc[i].second;
                if(tempcoins<coins) take[0]=i;
            }
            
        }else if(lrc[i].first.second == maxr){

            int tempcoins;

            if(take[0]==i) take[1]=i;
            else{
                tempcoins = lrc[take[0]].second + lrc[i].second;
                if(tempcoins<coins) take[1]=i;
            }
        }

        if(minl>lrc[i].first.first) minl = lrc[i].first.first;
        if(maxr<lrc[i].first.second) maxr = lrc[i].first.second;

        if(take[0]==take[1]) coins = lrc[take[0]].second;
        else coins = lrc[take[0]].second + lrc[take[1]].second;

        //cout<<minl<<" "<<maxr<<endl;

        cout<<coins<<endl;
    }
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