#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, k;
    cin>>n>>k;

    vector<int> a(n);
    for(auto &i : a) cin >> i;
    int sum = 0;
    int sqre_sum = 0;

    for(int i=0; i<n; i++){
        sum += a[i];
        sqre_sum += a[i]*a[i];
    }

    int temp = sqre_sum - sum*sum;
    int div = 2*sum;
    if(temp%div == 0){
        if(k==1){
            cout<<temp/div<<endl;
            return;
        }
        else{
            cout<<"IMPOSSIBLE"<<endl;
            return;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1; 
    cin>>t;
    for(int i=0; i<t; i++){
        cout<<"Case #"<<i+1<<": ";
        solve();
    }
    return 0;
}