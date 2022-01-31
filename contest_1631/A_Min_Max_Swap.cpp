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

    vector<int> a(n);
    for(auto &i : a) cin >> i;

    vector<int> b(n);
    for(auto &i : b) cin >> i;

    int maxa = a[0];
    int maxb = b[0];

    for(int i=1; i<n; i++){
        if(a[i]>maxa) maxa = a[i];
        if(b[i]>maxb) maxb = b[i];
    }
    if(maxa>maxb){
        for(int i = 0; i < n; i++){
            if(a[i]<b[i]){
                int temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }   
    }else{
        for(int i = 0; i < n; i++){
            if(b[i]<a[i]){
                int temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }  
    }
    maxa = a[0];
    maxb = b[0];

    for(int i = 0; i < n; i++){
        if(a[i]>maxa) maxa = a[i];
        if(b[i]>maxb) maxb = b[i];
    }

    cout<<maxa*maxb<<endl;
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