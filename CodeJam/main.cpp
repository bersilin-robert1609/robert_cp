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
    vector<string> a(n);
    for(auto &i : a) cin >> i;

    int links[n];
    for(int i=0; i<n; i++) links[i] = -1;

    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(a[i][a[i].length()-1] == a[j][0] && links[i] == -1)
            {
                links[i] = j;
            }
            else if(a[i][a[i].length()-1] == a[j][0] && links[i] != -1)
            {
                int flag = 0;
                int charac = a[j][0];
                for(int k=1; k<a[j].length(); k++){
                    if(a[j][k] != charac){
                        flag = 1;
                    }
                }   
                if(flag == 1){
                    cout<<"IMPOSSIBLE"<<endl;
                    return;
                }else{
                    links[j] = links[i];
                    links[i] = j;
                }
            }
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
    cin>>t;
    for(int i=1; i<=t; i++){
        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}