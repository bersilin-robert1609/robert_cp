#include<bits/stdc++.h>
using namespace std;

#define short int
#define int long long int
#define uint unsigned long long int
#define endl "\n"

const int MOD = 1e9+7;

void solve()
{
    int a[3];
    for(int &i: a) cin>>i;

    int maxIndex = 0;
    for(int i=1; i<3; i++){
        if(a[maxIndex]<a[i]) maxIndex = i;
    }

    for(int i=0; i<3; i++){

        if(a[i]<a[maxIndex]) cout<<a[maxIndex]-a[i]+1<<" ";
        else{
            if(a[maxIndex] == a[(maxIndex+1)%3] || a[maxIndex] == a[(maxIndex+2)%3]){
                cout<<1<<" ";
            }else{
                cout<<0<<" ";
            }
        }
    }

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