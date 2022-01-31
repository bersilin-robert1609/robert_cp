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

    vector<int> a(k);
    for(auto &i : a) cin >> i;

    sort(a.begin(), a.end(), greater<int>());

    int cat = 0, saved = 0, moves = 0;

    for(int i = 0; i < k; i++){
        
        if(a[i] > cat){
            saved++;
            moves = (n-a[i]);
            cat+=moves;
        }else{
            cout<<saved<<endl;
            return;
        }

    }

    cout<<saved<<endl;
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