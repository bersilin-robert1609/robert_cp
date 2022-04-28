#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;
    cin>>n;

    if(n%7==0){
        cout<<n<<endl;
        return;
    }

    int k = n/10;
    
    for(int i=0; i<10; i++){
        if((k-2*i)%7==0){
            int ans = k*10+i;
            cout<<ans<<endl;
            return;
        }
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