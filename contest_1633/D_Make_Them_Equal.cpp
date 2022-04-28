#include<bits/stdc++.h>
using namespace std;

#define short int
//#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int n, k;
    cin>>n>>k;

    int arr[12];
    int pow2 = 1;
    for(int i=0; i<12; i++){
        arr[i] = pow2;
        pow2*=2;
    }

    vector<int> b(n);
    for(auto &i : b) cin >> i;

    vector<int> c(n);
    for(auto &i : c) cin >> i;

    vector<int> d(n);
    for(auto &i : d) i = 0;
    for(int i=0; i<n; i++){
        while(b[i]>0){
            for(int j=0; j<11; j++){
                if(b[i]>=arr[j] && b[i]<arr[j+1]) {
                    d[i]+=j;
                    b[i]-=arr[j];
                    break;
                }
            }
            if(b[i]==1){
                d[i]++;
                break;
            }
        }
    }
    
    vector<pair<int, int>> a(n);
    for(int i=0; i<n; i++){
        a[i].first = c[i];
        a[i].second = d[i];
    }

    sort(a.begin(), a.end());

    int ans[n] = {0};
    for(int i=n-1; i>=0; i--){
        int l=k;
        for(int j=i; j>=0; j--){   
            if(l>=a[j].second){
                ans[i]+=a[j].first;
                l-=a[j].second;
            }
        }
    }
    sort(ans, ans+n);
    cout<<ans[n-1]<<endl;
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