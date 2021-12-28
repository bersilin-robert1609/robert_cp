#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int w, h;
    cin>>w>>h;

    int k;
    cin>>k;
    int x1[k];
    for(int i=0; i<k; i++) cin>>x1[i];

    int l;
    cin>>l;
    int x2[l];
    for(int i=0; i<l; i++) cin>>x2[i];

    int m;
    cin>>m;
    int y1[m];
    for(int i=0; i<m; i++) cin>>y1[i];

    int n;
    cin>>n;
    int y2[n];
    for(int i=0; i<n; i++) cin>>y2[i];

    int xmax = ((x1[k-1]-x1[0])>(x2[l-1]-x2[0])) ? x1[k-1]-x1[0]: x2[l-1]-x2[0];
    int ymax = ((y1[m-1]-y1[0])>(y2[n-1]-y2[0])) ? y1[m-1]-y1[0]: y2[n-1]-y2[0];

    //cout<<xmax<<" "<<ymax<<endl;

    int area1 = xmax * h;
    int area2 = ymax * w;

    //cout<<area1<<" "<<area2<<endl;

    int area = (area1>area2) ? area1: area2;

    cout<<area<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}