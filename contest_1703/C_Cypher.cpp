#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++)
    {
        int count; cin>>count;
        string str; cin>>str;
        int moves = 0;

        for(int j=0; j<count; j++)
        {
            if(str[j] == 'D') moves--;
            else if(str[j] == 'U') moves++;
        }
        //cout<<moves<<endl;

        a[i] = (a[i]-moves)%10;
        if(a[i] < 0) a[i]+=10;
    }
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
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