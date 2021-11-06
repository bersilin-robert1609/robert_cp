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
    string arr;
    cin>>arr;
    
    int arr2[n];
    arr2[0]=1; arr[0]='1';
    int i=1;
    while(arr[i]=='2' || arr[i]=='0'){
        if(arr[i]=='2') {arr[i]='1'; arr2[i]=1;}
        else {arr[i]='0'; arr2[i]=0;}
        i++;
    }
    arr2[i]=0;
    i++;
    while(i<n){
        arr2[i]=arr[i]-48;
        arr[i]='0';
        i++;
    }
    cout<<arr<<endl;
    for(int i=0; i<n; i++) cout<<arr2[i];
    cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}