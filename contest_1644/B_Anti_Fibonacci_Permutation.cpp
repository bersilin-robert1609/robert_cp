#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void printList(int i, int n){
    int j = n;

    for(int k=1; k<=n; k++){
        if(k==i) cout<<1<<" ";
        else{
            cout<<j<<" ";
            j--;
        }
    }
    cout<<endl;
}

void solve()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        printList(i, n);
    }
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