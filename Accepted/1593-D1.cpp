#include<bits/stdc++.h>
#include <cmath>
// #include <queue>
#include <stack>
// #include <string>
using namespace std;

#define int long long int

int findcomdiv(int int1, int int2){
    int min = int1;
    if(int2<int1) min=int2;
    int i;
    for(i=min; i>=1; i--){
        if(int1%i==0 && int2%i==0) break;
    }
    return i;
}

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int min=pow(10, 6)+1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(min>arr[i]) min=arr[i];
    }
    stack<int> S;
    for(int i=0; i<n; i++){
        arr[i]-=min;
        if(arr[i]!=0) S.push(arr[i]);
    }
    if(!S.empty()){
        int element1=S.top();
        S.pop();
        int comdiv;
        if(!S.empty()){
            comdiv=findcomdiv(element1, S.top());
            S.pop();
            while(comdiv!=1 && !S.empty()){
                comdiv=findcomdiv(comdiv, S.top());
                S.pop();
            }
        }else{
            cout<<element1<<endl;
            return;
        }
        cout<<comdiv<<endl;
    }else{
        cout<<-1<<endl;
    }
    

}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}