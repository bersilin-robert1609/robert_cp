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

    int lstart = 'a', lend = 'a'+ 25;
    int ustart = 'A', uend = 'A'+ 25;

    int arr[26] = {0};

    for(int i=0; i<n; i++){
        if(str[i]>=lstart && str[i]<=lend){
            arr[str[i]-lstart]++;
        }
        if(str[i]>=ustart && str[i]<=uend){
            arr[str[i]-ustart]++;
        }
    }

    int f=0;

    for(int i=0; i<26; i++){
        if(arr[i]==0) {
            f=1;
            cout<<"NO"<<endl;
            return;
        }
    }

    if(f==0) cout<<"YES"<<endl;
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