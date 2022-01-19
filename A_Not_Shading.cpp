#include<bits/stdc++.h>
using namespace std;

#define long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, m, r, c;
    cin>>n>>m>>r>>c;
    int checkb = 0;

    char arr[n+1][m+1];
    for(int i=1; i<=n; i++){
        string str;
        cin>>str;
        for(int j=1; j<=m; j++){
            arr[i][j] = str[j-1];
            if(checkb==0 && str[j-1]=='B') checkb=1;
        }
    }

    if(!checkb){
        cout<<-1<<endl;
        return;
    }

    if(arr[r][c]=='B'){
        cout<<0<<endl;
        return;
    }

    for(int i=1; i<=m; i++){
        if(arr[r][i]=='B'){
            cout<<1<<endl;
            return;
        }
    }

    for(int i=1; i<=n; i++){
        if(arr[i][c]=='B'){
            cout<<1<<endl;
            return;
        }
    }

    cout<<2<<endl;
    return;
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