#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
#include <string>
using namespace std;

#define int long long int

void solve()
{
    int n, x, y;
    cin>>n>>x>>y;

    string str;
    cin>>str;
    
    int flips=0;
    for(int i=n-x; i<n; i++){
        if(i!=n-y-1 && str[i]=='1') flips++; 
    }
    if(str[n-y-1]=='0') flips++;

    cout<<flips<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; t=1;
    while(t--) solve();
    return 0;
}