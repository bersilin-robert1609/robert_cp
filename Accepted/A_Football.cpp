#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n;
    cin>>n;

    string str;
    cin>>str;

    string team1 = str;
    if(n==1){
        cout<<team1<<endl;
        return;
    }

    int goal1 = 1;
    int goal2 = 0;

    string str1;
    for(int i=1; i<n; i++){
        cin>>str;

        if(str==team1) goal1++;
        else {
            str1 = str;
            goal2++;
        }
    }

    if(goal1>goal2) cout<<team1<<endl;
    else cout<<str1<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
    //cin>>t;
    while(t--) solve();
    return 0;
}