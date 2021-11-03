#include<bits/stdc++.h>
// #include <cmath>
#include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long int

void solve()
{
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>> Q;
    for(int i=0;i<n; i++){
        int temp;
        cin>>temp;
        Q.push(temp);
    }
    int subtract1=Q.top(), subtract2=Q.top();
    int ans=Q.top();
    Q.pop();
    while(!Q.empty()){
        int temp=Q.top();
        subtract2+=temp;
        temp-=subtract1;
        if(temp>ans) ans=temp;
        subtract1+=temp;
        Q.pop();
    }

    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}