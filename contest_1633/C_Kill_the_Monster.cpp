#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int hc, dc, hm, dm;
    cin>>hc>>dc>>hm>>dm;

    int k, w, a;
    cin>>k>>w>>a;
    for(int i = 0; i<=k; i++){

        int mtk = hm/(dc+i*w);
        if(hm%(dc+i*w)!=0) mtk++;

        int j = k-i;

        int ms = (hc+j*a)/dm;
        if((hc+j*a)%dm!=0) ms++;

        if(ms>=mtk) {
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
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