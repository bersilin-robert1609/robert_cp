#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve(int index)
{
    int r, c;
    cin>>r>>c;
    int a[r][c];
    int stones = 0;
    for(int i=0; i<r; i++)
    {
        string str;
        cin>>str;
        for(int j=0; j<c; j++)
        {
            a[i][j] = str[j];
            if(str[j] == '^') stones++;
        }
    }
    //cout<<r<<" "<<c<<endl;
    if(stones > 0)
    {
        if(r < 2 || c < 2) cout<<"Case #"<<index<<": "<<"Impossible"<<endl;
        else 
        {
            cout<<"Case #"<<index<<": "<<"Possible"<<endl;
            for(int i=0; i<r; i++)
            {
                for(int j=0; j<c; j++) cout<<"^";
                cout<<endl;
            }
        }
    }
    else 
    {
        cout<<"Case #"<<index<<": "<<"Possible"<<endl;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++) cout<<".";
            cout<<endl;
        }
    }
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen ("second_friend_input.txt", "r", stdin);
    freopen ("output3.txt","w", stdout);
    int t = 1; 
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        solve(i);
        //cout<<"Hello"<<endl;
    } 
    return 0;
}