#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int x=0, y=0;

    vector< pair< pair<int, int>, int > > xy(n+1);

    xy[0] = {{0,0},0};    

    for(int i=1; i<n+1; i++){

        switch(s[i-1]){
            case 'L': x--;break;
            case 'R': x++;break;
            case 'U': y++;break;
            case 'D': y--;break;
        }

        xy[i] = {{x, y}, i};
    }

    sort(xy.begin(), xy.end());

    int p1 = -1, p2 = -1;

    for(int i=0; i<n+1; i++){
        if();
    }

    cout<<-1<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}