#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
// #include <string>
using namespace std;

#define int long long int

int check(string s, string r){
    int f=0;
    
}

void solve()
{
    int n, m;
    cin>>n>>m;

    string arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int f=0, i;

    for(i=0; i<m; i++){
        int ele = arr[0][i];
        for(int j=1; j<n; j++){
            if(arr[j][i]!=ele){
                f=1;
                break;
            }
        }

        if(f){
            for(int j=0; j<26; j++){
                char ch = j+'a';
                for(int k=0; k<n; k++){
                    string s = arr[k].substr(0, i) + ch + arr[k].substr(i+1, m-i-1); 
                    int f2=0;
                    for(int l=0; l<n; l++){
                        if(check(arr[l], s)==0){
                            f2=1;
                            break;
                        }
                    }
                }
            }
        }
    }


}

    

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}