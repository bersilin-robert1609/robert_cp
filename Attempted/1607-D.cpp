#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long int

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    char col[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    string str;
    cin>>str;
    for(int i=0; i<n; i++) col[i]=str[i];

    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[minIndex]>arr[j]) minIndex=j;
        }
        int temp = arr[i];
        char ctemp = col[i];
        arr[i]=arr[minIndex];
        col[i]=col[minIndex];
        arr[minIndex]=temp;
        col[minIndex]=ctemp;
    }

    int i;

    for(i=0; i<n; i++){
        if(arr[i]>i+1 && col[i]=='R'){
            if(arr[i+1]==arr[i]){
                
            }
        }else if(arr[i]<i+1 && col[i]=='B'){
            cout<<"NO"<<endl;
            break;
        }
    }
    if(i==n) cout<<"YES"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}