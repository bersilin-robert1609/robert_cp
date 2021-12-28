#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int gcd1 = arr[0], gcd2 = arr[1];

    for(int i=0; i<n; i+=2){
        gcd1 = __gcd(gcd1, arr[i]);
    }
    for(int i=1; i<n; i+=2){
        gcd2 = __gcd(gcd2, arr[i]);
    }

    //cout<<gcd1<<" "<<gcd2<<endl;

    if(gcd1 == gcd2){
        cout<<0<<endl;
        return;
    }

    int f1=0;
    for(int i=0; i<n; i+=2){
        if(arr[i]%gcd2==0){
            f1=1;
        }
    }
      
    int f2=0;
    for(int i=1; i<n; i+=2){
        if(arr[i]%gcd1==0){
            f2=1;
        }
    }

    if(f1==0){
        cout<<gcd2<<endl;
        return;
    }else if(f2==0){
        cout<<gcd1<<endl;
        return;
    }

    cout<<0<<endl;
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}