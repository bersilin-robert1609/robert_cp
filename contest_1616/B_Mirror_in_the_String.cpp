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

    if(n==1){
        cout<<str[0]<<str[0]<<endl;
        return;
    }

    int k=1;
    if(str[1]-'a' < str[0]-'a') {
        k++;
        while((str[k]-'a' <= str[k-1]-'a' && k<=n-1)) k++;
    }else k=1;

    for(int i=0; i<k; i++) cout<<str[i];

    for(int i=k-1; i>=0; i--) cout<<str[i];

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