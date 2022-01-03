#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int n; cin>>n;
    
    if(n%2==0){
        std::cout << n/2 << " " << n/2-1 << " "<< 1 << std::endl;
    }else{
        if((n-1)/2 % 2 ==0) std::cout << (n-3)/2 << " " << (n+1)/2 << " " << 1 << std::endl;
        else std::cout << (n-5)/2 << " " << (n+3)/2 << " "<< 1 << std::endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}