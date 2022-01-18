#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;
    cin>>n;

    vector<pair<int, int>> particles(n);
    for(int i=0; i<n; i++){
        cin>>particles[i].first;
        particles[i].second = i;
    }

    sort(particles.begin(), particles.end());

    int ans = -1;
    int i=0;
    while(i<n-1){
        if(particles[i].first!=particles[i+1].first){
            i++;
            continue;
        }

        int max = min(particles[i].second, particles[i+1].second) + min(n-particles[i].second-1, n-particles[i+1].second-1)+1;
        if(max>ans) ans = max;
        i++;
    }

    cout<<ans<<endl;
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