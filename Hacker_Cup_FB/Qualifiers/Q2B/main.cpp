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
    char a[r][c];
    int trees = 0;
    for(int i=0; i<r; i++)
    {
        string str;
        cin>>str;
        for(int j=0; j<c; j++)
        {
            a[i][j] = str[j];
            if(str[j] == '^') trees++;
        }
    }
    //cout<<r<<" "<<c<<endl;
    if(trees > 0)
    {
        if(r < 2 || c < 2) cout<<"Case #"<<index<<": "<<"Impossible"<<endl;
        else 
        {
            for(int i=0; i<r; i++)
            {
                for(int j=0; j<c; j++)
                {
                    if(a[i][j] != '#') a[i][j] = '^';
                }
            }

            for(int i=0; i<r; i++)
            {
                for(int j=0; j<c; j++)
                {
                    if(a[i][j] == '^')
                    {
                        int neightbour_count = 0;
                        if(i-1 >= 0 && a[i-1][j] == '^') neightbour_count++;
                        if(i+1 < r && a[i+1][j] == '^') neightbour_count++;
                        if(j-1 >= 0 && a[i][j-1] == '^') neightbour_count++;
                        if(j+1 < c && a[i][j+1] == '^') neightbour_count++;

                        if(neightbour_count < 2) cout<<"Case #"<<index<<": "<<"Impossible"<<endl;
                        else 
                        {
                            cout<<"Case #"<<index<<": "<<"Possible"<<endl;
                            for(int i=0; i<r; i++)
                            {
                                for(int j=0; j<c; j++) cout<<a[i][j];
                                cout<<endl;
                            }
                            return;
                        }   
                    }
                }
            }
        }
    }
    else 
    {
        cout<<"Case #"<<index<<": "<<"Possible"<<endl;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++) cout<<a[i][j];
            cout<<endl;
        }
    }
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen ("second_second_friend_validation_input.txt", "r", stdin);
    freopen ("output2.txt","w", stdout);
    int t = 1; 
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        solve(i);
        //cout<<"Hello"<<endl;
    } 
    return 0;
}