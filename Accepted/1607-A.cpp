#include<bits/stdc++.h>
// #include <cmath>
// #include <queue>
// #include <stack>
#include <string>
using namespace std;


void solve()
{
    string str1, str2;
    cin>>str1>>str2;
    int n=str2.length();
    char str2char=str2[0];
    int start;
    for(int i=0; i<26; i++){
        if(str2char==str1[i]){
            start=i;
            break;
        }
    }
    int ans=0;
    for(int i=1; i<n; i++){
        char str2currchar = str2[i];
        int currcharpos;
        for(int j=0; j<26; j++){
            if(str2currchar==str1[j]){
                currcharpos=j;
                break;
            }
        }
        if(currcharpos-start>0) ans+=currcharpos-start;
        else ans+=start-currcharpos;
        start=currcharpos;
        str2char=str2currchar;
    }

    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}