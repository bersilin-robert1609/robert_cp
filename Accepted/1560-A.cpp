#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int k;
    cin>>k;

    int n=0;
    int cnt=0;
    while(cnt<k){
        n++;
        if(n%3!=0 && n%10!=3){
            cnt++;
        }
    }

    cout<<n<<endl;
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