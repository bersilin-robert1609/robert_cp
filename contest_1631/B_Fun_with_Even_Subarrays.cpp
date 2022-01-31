#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n; cin>>n;

    vector<int> a(n);
    for(auto &i : a) cin >> i;

    int term = a[n-1];
    int k = 1;
    int i = n-2;
    int count = 0;

    while(k<n){

        if(a[i]==term){
            k++;
            i--;
        }else{
            count++;
            i-=k;
            k*=2;
        }

    }

    cout<<count<<endl;
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