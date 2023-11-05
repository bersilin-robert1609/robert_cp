#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, x;
    cin>>n>>x;

    string str;
    cin>>str;

    int ans=0;
    for(int i=0; i<str.length(); i++) 
        if(str[i] == '1') ans++;

    priority_queue<int> pq;

    int count = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '1')
        {
            pq.push(count);
            count = 0;
        }else count++;
    }
    pq.push(count);

    while(!pq.empty() && x>0)
    {
        int temp = pq.top();
        pq.pop();
        if(2*temp+1 <= x)
        {
            ans+=temp;
            x-=2*temp+1;
        }
        else 
        {
            int temp2 = (x-1)/2;
            ans+=temp2;
            x-=2*temp2+1;
        }
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